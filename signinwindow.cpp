#include "signinwindow.h"
#include "ui_signinwindow.h"

SigninWindow::SigninWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SigninWindow)
{
    ui->setupUi(this);

    connect(ui->backButton, &QPushButton::clicked, this, &SigninWindow::backClicked);
}

SigninWindow::~SigninWindow()
{
    delete ui;
}

void SigninWindow::on_okButton_clicked()
{
    TaskManager base;

    QString name = ui->nameEdit->text();
    QString password = ui->passwordEdit->text();

    int id = base.open_account(name, password);

    if(id == 0)
    {
        emit adminConnect();
    }
    else if(id == -1)
        QMessageBox::warning(this, "Warning", "Нет такого пользователя", QMessageBox::Cancel);

    else
    {

    }
}

