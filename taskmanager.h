#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class TaskManager {
public:
    void open_db();
    void close_db();
    int open_account(QString &username, QString &phone_password);
};

#endif // TASKMANAGER_H
