#include "completedtaskspage.h"
#include "ui_completedtaskspage.h"

CompletedTasksPage::CompletedTasksPage(QWidget *parent, const unsigned int& user_id)
    : QWidget(parent)
    , ui(new Ui::CompletedTasksPage)
    , user_id(user_id)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::database("task_db");
    tasksModel = new QSqlTableModel(this, db);

    QString filter = QString("user_id = '%1' and complete = true").arg(user_id);

    tasksModel->setTable("tasks");
    tasksModel->setFilter(filter);
    tasksModel->select();

    ui->tasksView->setModel(tasksModel);
    ui->tasksView->setEditTriggers(QTableView::NoEditTriggers);

    shortcut = new QShortcut(QKeySequence(Qt::Key_Escape), this);
    connect(shortcut, &QShortcut::activated, this, &QWidget::close);
}

CompletedTasksPage::~CompletedTasksPage()
{
    delete ui;
}
