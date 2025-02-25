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

int TaskManager::open_account(QString &username, QString &phone_password)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("SELECT id, name, admin FROM users "
                  "WHERE name = :name AND phone = :pswd");
    query.bindValue(":name", username);
    query.bindValue(":pswd", phone_password);
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
