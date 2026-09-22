#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <openssl/evp.h>
#include <QByteArray>

class TaskManager {
public:
    TaskManager();
    //bool open_db();
    //void close_db();
    static int open_account(QString &username, QString &phone_password);
    static QString generateSalt();                                              //случайная соль в hex
    static QString hashPassword(const QString& password, const QString& salt);  //для входа и регистрации

    ~TaskManager();
};

#endif // TASKMANAGER_H
