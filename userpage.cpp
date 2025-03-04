#include "userpage.h"
#include "ui_userpage.h"

UserPage::UserPage(QWidget *parent, const QString& user)
    : QWidget(parent)
    , ui(new Ui::UserPage)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::database("task_db");

    tasksModel = new QSqlTableModel(this, db);
    tasksModel->setTable("tasks");


    QSqlQuery query(db);
    query.prepare("select id from users "
                  "where name = :name");
    query.bindValue(":name", user);
    query.exec();
    query.next();

    user_id = query.value(0).toUInt();
    QString filter = QString("user_id = '%1' and complete = false").arg(user_id);

    tasksModel->setFilter(filter);
    tasksModel->select();
    ui->tasksView->setModel(tasksModel);
    ui->tasksView->setEditTriggers(QTableView::NoEditTriggers);
    tasksModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

UserPage::~UserPage()
{
    delete ui;
}

void UserPage::on_doneButton_clicked()
{
    QModelIndex index = ui->tasksView->currentIndex();

    if(!index.isValid())
        return;

    tasksModel->setData(index, true);
    tasksModel->submitAll();
    tasksModel->select();
}


void UserPage::on_showButton_clicked()
{
    completedTasksPage = new CompletedTasksPage(this, user_id);
    completedTasksPage->show();
}

