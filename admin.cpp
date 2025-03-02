#include "admin.h"

Admin::Admin(QWidget *parent) : parent(parent) { };

void Admin::addTask(const int& id, const std::string& description, const bool& status)
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("INSERT INTO tasks(user_id, description, complete) "
                  "VALUES(:id, :desc, :complete)");

    query.bindValue(":id", id);
    query.bindValue(":desc", QString::fromStdString(description));
    query.bindValue(":complete", status);

    if(!query.exec())
        QMessageBox::warning(this->parent, "Warning", query.lastError().text(), QMessageBox::Cancel);
}

// void Admin::deleteTask(int& id, const std::string& description)
// {
//     QSqlDatabase db = QSqlDatabase::database("task_db");
//     QSqlQuery query(db);

//     query.prepare("DELETE FROM tasks "
//                   "WHERE user_id = :id AND description = :desc");

//     query.bindValue(":id", id);
//     query.bindValue(":desc", QString::fromStdString(description));

//     if(!query.exec())
//         QMessageBox::warning(this->parent, "Warning", query.lastError().text(), QMessageBox::Cancel);
// }
