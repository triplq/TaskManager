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

    qDebug() << user;
    qDebug() << user_id;

    QString filter = QString("user_id = '%1'").arg(user_id);

    tasksModel->setFilter(filter);
    tasksModel->select();
    ui->tasksView->setModel(tasksModel);
    ui->tasksView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

UserPage::~UserPage()
{
    delete ui;
}
