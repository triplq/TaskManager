#include "signuppage.h"
#include "ui_signuppage.h"

SignupPage::SignupPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignupPage)
{
    ui->setupUi(this);
}

SignupPage::~SignupPage()
{
    delete ui;
}

void SignupPage::on_okButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("insert into users(name, password, admin) "
                  "values(:name, :password, false)");
    query.bindValue(":name", ui->nameEdit->text());
    query.bindValue(":password", ui->passwordEdit->text());

    if(!query.exec())
        QMessageBox::warning(this, "Warning", query.lastError().text(), QMessageBox::Cancel);

    else
        QMessageBox::information(this, "Success!", "Вы успешно зарегистрированы!", QMessageBox::Cancel);

    emit backClicked();
}

