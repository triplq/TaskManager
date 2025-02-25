#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QWidget>
#include <QMessageBox>
#include "taskmanager.h"

namespace Ui {
class SigninWindow;
}

class SigninWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SigninWindow(QWidget *parent = nullptr);
    ~SigninWindow();
signals:
    void backClicked();
    void okClicked();

    void adminConnect();

private slots:
    void on_okButton_clicked();

private:
    Ui::SigninWindow *ui;
};

#endif // SIGNINWINDOW_H
