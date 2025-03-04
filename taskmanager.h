#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

class TaskManager {
public:
    bool open_db();
    void close_db();
    int open_account(QString &username, QString &phone_password);
};

#endif // TASKMANAGER_H
