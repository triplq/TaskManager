#include "taskmanager.h"

#include <openssl/rand.h>

namespace {

// Параметры хеширования паролей. Меняются только здесь.
constexpr int PBKDF2_ITERATIONS = 600000;
constexpr int SALT_BYTES = 16;
constexpr int HASH_BYTES = 32;

// Значения по умолчанию для подключения к БД. Пароль умолчания не имеет.
constexpr auto DEFAULT_HOST = "localhost";
constexpr auto DEFAULT_NAME = "task_db";
constexpr auto DEFAULT_USER = "db_user";
constexpr int  DEFAULT_PORT = 5432;

} // namespace

TaskManager::TaskManager()
{
    if(!qEnvironmentVariableIsSet("DB_PASSWORD"))
    {
        QMessageBox::critical(nullptr, "Ошибка настройки",
                              "Не задана переменная окружения DB_PASSWORD — "
                              "подключиться к базе данных невозможно.\n\n"
                              "Задайте пароль перед запуском, например:\n"
                              "    export DB_PASSWORD=ваш_пароль\n\n"
                              "Остальные параметры необязательны, у них есть значения "
                              "по умолчанию: DB_HOST, DB_PORT, DB_NAME, DB_USER.\n"
                              "Подробности — в README.",
                              QMessageBox::Cancel);
        return;
    }

    const int port = qEnvironmentVariableIntValue("DB_PORT");

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", "task_db");
    db.setHostName(qEnvironmentVariable("DB_HOST", DEFAULT_HOST));
    db.setDatabaseName(qEnvironmentVariable("DB_NAME", DEFAULT_NAME));
    db.setUserName(qEnvironmentVariable("DB_USER", DEFAULT_USER));
    db.setPassword(qEnvironmentVariable("DB_PASSWORD"));
    db.setPort(port > 0 ? port : DEFAULT_PORT);

    if(!db.open())
    {
        QMessageBox::warning(nullptr, "Warning", db.lastError().text(), QMessageBox::Cancel);
    }
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
    QString hashed_password = hashPassword(password, salt);

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

    return -1;
}

QString TaskManager::generateSalt()
{
    unsigned char salt[SALT_BYTES];

    if(RAND_bytes(salt, SALT_BYTES) != 1)
        return QString();

    return QString(QByteArray(reinterpret_cast<const char*>(salt), SALT_BYTES).toHex());
}

QString TaskManager::hashPassword(const QString &password, const QString& salt)
{
    const QByteArray password_utf8 = password.toUtf8();
    const QByteArray salt_bytes = QByteArray::fromHex(salt.toUtf8());

    unsigned char hash[HASH_BYTES];

    if(PKCS5_PBKDF2_HMAC(password_utf8.constData(), password_utf8.size(),
                         reinterpret_cast<const unsigned char*>(salt_bytes.constData()), salt_bytes.size(),
                         PBKDF2_ITERATIONS, EVP_sha256(), HASH_BYTES, hash) != 1)
        return QString();

    return QString(QByteArray(reinterpret_cast<const char*>(hash), HASH_BYTES).toHex());
}

TaskManager::~TaskManager()
{
    if(!QSqlDatabase::contains("task_db"))
        return;

    QSqlDatabase db = QSqlDatabase::database("task_db");

    if(db.isOpen())
        db.close();

    QSqlDatabase::removeDatabase("task_db");
    qDebug() << "Соединение закрыто.";
}
