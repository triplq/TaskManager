#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <openssl/evp.h>
#include <QByteArray>
#include <QRandomGenerator>

class TaskManager {
public:
    TaskManager();
    //bool open_db();
    //void close_db();
    static int open_account(QString &username, QString &phone_password);
    static QString reg_hashingPassword(const QString& password, QString& salt); //для регистрации
    static QString open_hashingPassword(const QString &password, const QString& salt); //для входа
    static QString randomString();

    ~TaskManager();
};

#endif // TASKMANAGER_H
