#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "hellopage.h"
#include "signinpage.h"
#include "adminpage.h"
#include "userpage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void showHelloPage();
    void showSigninPage();
    void showAdminPage();
    void showUserPage(const QString& user);
};
#endif // MAINWINDOW_H
