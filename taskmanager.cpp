#include "taskmanager.h"

void TaskManager::open_db()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", "task_db");
    db.setHostName("localhost");
    db.setDatabaseName("task_db");
    db.setUserName("db_user");
    db.setPassword("12345");
    db.setPort(5432);

    if(!db.open())
        qDebug() << db.lastError().text();
    else
        qDebug() << "Open";
}

int TaskManager::open_account()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    std::string username{"bird"};
    std::string phone_password{"0101"};

    query.prepare("SELECT id, name, admin FROM users "
                  "WHERE name = :name AND phone = :pswd");
    query.bindValue(":name", QString::fromStdString(username));
    query.bindValue(":pswd", QString::fromStdString(phone_password));
    query.exec();
    query.next();

    if(query.value(2).toBool() == true)
    {
        qDebug() << "u r a admin";
        return 0;
    }
    else if(query.value(2).toBool() == false)
    {
        qDebug() << "u r a user";
        return query.value(0).toInt();
    }
    else
        qDebug() << "no user";
        //repeat
}

TaskManager::~TaskManager()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");

    if(db.isOpen())
        db.close();

    QSqlDatabase::removeDatabase("task_db");
    qDebug() << "Соединение закрыто.";
}
