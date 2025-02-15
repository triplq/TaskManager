#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class TaskManager {
public:
    ~TaskManager();

    void open_db();
    int open_account();
};

#endif // TASKMANAGER_H
