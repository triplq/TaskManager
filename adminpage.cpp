#include "adminpage.h"
#include "ui_adminpage.h"

adminpage::adminpage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminpage)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::database("task_db");

    modelTasks = new QSqlTableModel(this, db);
    modelTasks->setTable("tasks");
    modelTasks->select();

    modelUsers = new QSqlTableModel(this, db);
    modelUsers->setTable("users");
    modelUsers->select();

    ui->tasksView->setModel(modelTasks);
    ui->usersView->setModel(modelUsers);
}

adminpage::~adminpage()
{
    delete ui;
}
