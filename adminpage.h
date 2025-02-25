#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include "admin.h"

namespace Ui {
class adminpage;
}

class adminpage : public QWidget
{
    Q_OBJECT

public:
    explicit adminpage(QWidget *parent = nullptr);
    ~adminpage();

private:
    Ui::adminpage *ui;
    QSqlTableModel *modelTasks;
    QSqlTableModel *modelUsers;
};

#endif // ADMINPAGE_H
