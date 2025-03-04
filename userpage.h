#ifndef USERPAGE_H
#define USERPAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlQuery>
#include "completedtaskspage.h"

namespace Ui {
class UserPage;
}

class UserPage : public QWidget
{
    Q_OBJECT

private:
    unsigned int user_id;

public:
    explicit UserPage(QWidget *parent = nullptr, const QString& user = "0");
    ~UserPage();

private slots:
    void on_doneButton_clicked();

    void on_showButton_clicked();

private:
    Ui::UserPage *ui;
    QSqlTableModel *tasksModel;
    CompletedTasksPage *completedTasksPage;
};

#endif // USERPAGE_H
