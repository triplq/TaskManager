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
    Admin admin(this);

    admin.addTask(ui->nameEdit->text().toInt(), ui->taskEdit->text().toStdString(), ui->statusBox->isTristate());

    close();
    tasksModel->select();
}



TaskworkDialog::~TaskworkDialog()
{
    delete ui;
}
