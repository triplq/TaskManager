#include "mainwindow.h"
#include "task.h"
#include "taskmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    TaskManager o;

    o.open_db();

    w.show();
    return a.exec();
}
