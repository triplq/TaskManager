#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "string"
#include "task.h"
#include <vector>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class TaskManager {
public:
    TaskManager();

    ~TaskManager();

    void addTask(const std::string& description);
    void deleteTask(const std::string &description);
    std::vector<std::string> getAllTasks();
    void editTask(int id, const std::string& new_descrip);
    void completeTask(int id);
    void setIncompleteTask(int id);
    void setAllTasksAreCompleted();

};

#endif // TASKMANAGER_H
