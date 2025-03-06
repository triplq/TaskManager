#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include "taskmanager.h"

namespace Ui {
class SignupPage;
}

class SignupPage : public QWidget
{
    Q_OBJECT

public:
    explicit SignupPage(QWidget *parent = nullptr);
    ~SignupPage();

signals:
    void backClicked();

private slots:
    void on_okButton_clicked();

private:
    Ui::SignupPage *ui;
};

#endif // SIGNUPPAGE_H
