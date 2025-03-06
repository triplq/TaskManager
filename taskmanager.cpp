#include "taskmanager.h"

bool TaskManager::open_db()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", "task_db");
    db.setHostName("localhost");
    db.setDatabaseName("task_db");
    db.setUserName("db_user");
    db.setPassword("12345");
    db.setPort(5432);

    if(!db.open())
    {
        QMessageBox::warning(nullptr, "Warning", db.lastError().text(), QMessageBox::Cancel);
        return false;
    }

    return true;
}

int TaskManager::open_account(QString &username, QString &password)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("select salt from users "
                  "where name = :username");
    query.bindValue(":username", username);
    if(!query.exec())
        return -1;

    query.next();

    if(query.value(0).isNull())
        return -1;

    QString salt = query.value(0).toString();
    QString hashed_password = open_hashingPassword(password, salt);

    query.prepare("SELECT id, name, admin FROM users "
                  "WHERE name = :name AND hash_password = :pswd");
    query.bindValue(":name", username);
    query.bindValue(":pswd", hashed_password);
    query.exec();
    query.next();

    if(query.value(0).isNull())
        return -1;

    else if(query.value(2).toBool() == true)
        return 0;

    else if(query.value(2).toBool() == false)
        return query.value(0).toInt();
}

void TaskManager::close_db()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");

    if(db.isOpen())
        db.close();

    QSqlDatabase::removeDatabase("task_db");
    qDebug() << "Соединение закрыто.";
}

QString TaskManager::reg_hashingPassword(const QString &password, QString& salt) //для регистрации
{
    salt = randomString();
    QByteArray salt_utf8 = salt.toUtf8();
    QByteArray saltedPassword = password.toUtf8() + salt_utf8;

    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int length = 0;

    EVP_Digest(saltedPassword.data(), saltedPassword.size(), hash, &length, EVP_sha256(), nullptr);

    return QString(QByteArray(reinterpret_cast<const char*>(hash), length).toHex());
}

QString TaskManager::open_hashingPassword(const QString &password, const QString& salt) //для входа
{
    QByteArray salt_utf8 = salt.toUtf8();
    QByteArray saltedPassword = password.toUtf8() + salt_utf8;

    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int length = 0;

    EVP_Digest(saltedPassword.data(), saltedPassword.size(), hash, &length, EVP_sha256(), nullptr);

    return QString(QByteArray(reinterpret_cast<const char*>(hash), length).toHex());
}


QString TaskManager::randomString()
{
    QString symbols {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!?#$%@=+-"};
    QString result;

    for(unsigned i = 0; i < 6; i++)
    {
        unsigned index = QRandomGenerator::global()->bounded(symbols.length());
        result.append(symbols.at(index));
    }

    return result;
}
