#include "admin.h"

void Admin::addTask(const std::string &description)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("INSERT INTO tasks(description) "
                  "VALUES(:desc)");
    query.bindValue(":desc", QString::fromStdString(description));

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "Add is success";
}

void Admin::deleteTask(const std::string &description)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("DELETE FROM tasks "
                  "WHERE description = :desc");
    query.bindValue(":desc", QString::fromStdString(description));

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "Deleting is success";
}

void Admin::editTask(int id, const std::string &new_descrip)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("UPDATE tasks "
                  "SET description = :desc "
                  "WHERE id = :id");
    query.bindValue(":desc", QString::fromStdString(new_descrip));
    query.bindValue(":id", id);

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "Successfully completed";
}

void Admin::completeTask(int id)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("UPDATE tasks "
                  "SET complete = TRUE "
                  "WHERE id = :id");
    query.bindValue(":id", id);

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "Completing success";
}

void Admin::setIncompleteTask(int id)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("UPDATE tasks "
                  "SET complete = FALSE "
                  "WHERE id = :id");
    query.bindValue(":id", id);

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "Incompleting success";
}
