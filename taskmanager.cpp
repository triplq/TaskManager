#include "taskmanager.h"

TaskManager::TaskManager() {
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

TaskManager::~TaskManager() { QSqlDatabase::removeDatabase("task_db"); }

void TaskManager::addTask(const std::string &description)
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

void TaskManager::deleteTask(const std::string &description)
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

std::vector<std::string> TaskManager::getAllTasks()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);
    std::vector<std::string> all_tasks;


    query.exec("SELECT * FROM tasks");
    while(query.next())
    {
        Task current_task;
        current_task.setId(query.value(0).toUInt());
        current_task.setDesc(query.value(1).toString().toStdString());
        current_task.setComplete(query.value(2).toBool());
        all_tasks.push_back(current_task.toString());
    }

    if(all_tasks.empty())
        qDebug() << "table is empty";
    else
        return all_tasks;
}

void TaskManager::editTask(int id, const std::string &new_descrip)
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

void TaskManager::completeTask(int id)
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

void TaskManager::setIncompleteTask(int id)
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

void TaskManager::setAllTasksAreCompleted()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("UPDATE tasks "
                  "SET complete = TRUE");

    if(!query.exec())
        qDebug() << query.lastError().text();
    else
        qDebug() << "All are complete";
}
