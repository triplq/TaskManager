#ifndef SIGNINPAGE_H
#define SIGNINPAGE_H

#include <QWidget>
#include <QMessageBox>
#include "taskmanager.h"

namespace Ui {
class SigninPage;
}

class SigninPage : public QWidget
{
    Q_OBJECT

public:
    explicit SigninPage(QWidget *parent = nullptr);
    ~SigninPage();

signals:
    void backClicked();

    void adminConnect();
    void userConnect(const QString& user);

private slots:
    void on_okButton_clicked();

private:
    Ui::SigninPage *ui;
};

#endif // SIGNINPAGE_H
