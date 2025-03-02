#ifndef USERPAGE_H
#define USERPAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlQuery>

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

private:
    Ui::UserPage *ui;
    QSqlTableModel *tasksModel;
};

#endif // USERPAGE_H
