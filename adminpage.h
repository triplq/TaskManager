#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTableView>
#include <QMenu>
#include "admin.h"
#include "taskworkdialog.h"

namespace Ui {
class AdminPage;
}

class AdminPage : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

private slots:
    void on_addTaskButton_clicked();
    void showContextMenu(const QPoint &pos);

private:
    Ui::AdminPage *ui;
    QSqlTableModel *modelTasks;
    QSqlTableModel *modelUsers;
    TaskworkDialog *taskWorkDialog;
};

#endif // ADMINPAGE_H
