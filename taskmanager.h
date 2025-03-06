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
    bool open_db();
    void close_db();
    int open_account(QString &username, QString &phone_password);
    static QString reg_hashingPassword(const QString& password, QString& salt); //для регистрации
    QString open_hashingPassword(const QString &password, const QString& salt); //для входа
    static QString randomString();
};

#endif // TASKMANAGER_H
