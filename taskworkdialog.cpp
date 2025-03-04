#include "taskworkdialog.h"
#include "ui_taskworkdialog.h"

TaskworkDialog::TaskworkDialog(QWidget *parent, QSqlTableModel *tasksModel)
    : QDialog(parent)
    , ui(new Ui::TaskworkDialog)
    , tasksModel(tasksModel)
{
    ui->setupUi(this);
}

void TaskworkDialog::on_okButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database("task_db");
    QSqlQuery query(db);

    query.prepare("select id from users "
                  "where name = :name");
    query.bindValue(":name", ui->nameEdit->text());
    query.exec();
    query.next();

    int id = query.value(0).toInt();

    query.prepare("INSERT INTO tasks(user_id, description, complete) "
                  "VALUES(:id, :desc, :complete)");

    query.bindValue(":id", id);
    query.bindValue(":desc", ui->taskEdit->text());
    query.bindValue(":complete", ui->statusBox->isTristate());

    if(!query.exec())
        QMessageBox::warning(this, "Warning", query.lastError().text(), QMessageBox::Cancel);

    close();
    tasksModel->select();
}



TaskworkDialog::~TaskworkDialog()
{
    delete ui;
}
