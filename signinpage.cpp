#include "signinpage.h"
#include "ui_signinpage.h"

SigninPage::SigninPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SigninPage)
{
    ui->setupUi(this);

    connect(ui->backButton, &QPushButton::clicked, this, &SigninPage::backClicked);
}

void SigninPage::on_okButton_clicked()
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
        emit userConnect(name);
    }
}


SigninPage::~SigninPage()
{
    delete ui;
}
