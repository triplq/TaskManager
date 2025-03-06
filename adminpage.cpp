#include "adminpage.h"
#include "ui_adminpage.h"

AdminPage::AdminPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminPage)
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

    ui->tasksView->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->usersView->setContextMenuPolicy(Qt::CustomContextMenu);

    ui->usersView->hideColumn(3);
    ui->usersView->hideColumn(4);
    ui->usersView->resizeColumnsToContents();

    connect(ui->tasksView, &QTableView::customContextMenuRequested, this, &AdminPage::showContextMenu);
    connect(ui->usersView, &QTableView::customContextMenuRequested, this, &AdminPage::showContextMenu);
}

void AdminPage::on_addTaskButton_clicked()
{
    taskWorkDialog = new TaskworkDialog(this, modelTasks);
    taskWorkDialog->show();
}

void AdminPage::showContextMenu(const QPoint &pos)
{
    QTableView *view = qobject_cast<QTableView*>(sender());
    QSqlTableModel *sqlTable = qobject_cast<QSqlTableModel*>(view->model());

    QModelIndex index = view->indexAt(pos);

    if(!index.isValid())
        return;

    QMenu contextMenu;
    QAction *deleteAction = new QAction("Удалить строку", this);
    connect(deleteAction, &QAction::triggered, this, [=]()
    {
        sqlTable->removeRow(index.row());
        sqlTable->submitAll();
    });

    contextMenu.addAction(deleteAction);
    contextMenu.exec(view->viewport()->mapToGlobal(pos));
    sqlTable->select();
}

AdminPage::~AdminPage()
{
    delete ui;
}
