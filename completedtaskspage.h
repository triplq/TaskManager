#ifndef COMPLETEDTASKSPAGE_H
#define COMPLETEDTASKSPAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QShortcut>

namespace Ui {
class CompletedTasksPage;
}

class CompletedTasksPage : public QWidget
{
    Q_OBJECT

private:
    unsigned int user_id;

public:
    explicit CompletedTasksPage(QWidget *parent = nullptr, const unsigned int& user_id = 0);
    ~CompletedTasksPage();

private:
    Ui::CompletedTasksPage *ui;
    QSqlTableModel *tasksModel;
    QShortcut *shortcut;
};

#endif // COMPLETEDTASKSPAGE_H
