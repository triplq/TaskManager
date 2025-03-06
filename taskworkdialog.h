#ifndef TASKWORKDIALOG_H
#define TASKWORKDIALOG_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class TaskworkDialog;
}

class TaskworkDialog : public QDialog
{
    Q_OBJECT

private:
    QSqlTableModel *tasksModel;

public:
    explicit TaskworkDialog(QWidget *parent = nullptr, QSqlTableModel *tasksModel = nullptr);
    ~TaskworkDialog();

private slots:
    void on_okButton_clicked();

private:
    Ui::TaskworkDialog *ui;
};

#endif // TASKWORKDIALOG_H
