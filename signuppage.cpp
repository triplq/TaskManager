#include "signuppage.h"
#include "ui_signuppage.h"

SignupPage::SignupPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignupPage)
{
    ui->setupUi(this);

    connect(ui->backButton, &QPushButton::clicked, this, &SignupPage::backClicked);
}

SignupPage::~SignupPage()
{
    delete ui;
}

void SignupPage::on_okButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    QString salt = TaskManager::generateSalt();
    QString hash_password = TaskManager::hashPassword(ui->passwordEdit->text(), salt);

    if(salt.isEmpty() || hash_password.isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Не удалось захешировать пароль.", QMessageBox::Cancel);
        return;
    }

    query.prepare("insert into users(name, admin, hash_password, salt) "
                  "values(:name, false, :pswd, :salt)");
    query.bindValue(":name", ui->nameEdit->text());
    query.bindValue(":pswd", hash_password);
    query.bindValue(":salt", salt);

    if(!query.exec())
        QMessageBox::warning(this, "Warning", query.lastError().text(), QMessageBox::Cancel);

    else
        QMessageBox::information(this, "Success!", "Вы успешно зарегистрированы!", QMessageBox::Cancel);

    emit backClicked();
}

