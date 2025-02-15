#include "user.h"

User::User(int id)
    : id(id) { };

void User::completeTask()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("UPDATE tasks "
                  "SET complete = TRUE "
                  "WHERE id = :id");
    query.bindValue(":id", this->id);

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "Completing success";
}
