#include "mainwindow.h"
#include "taskmanager.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    TaskManager o;

    if(!o.open_db())
        return 0;

    w.show();
    return a.exec();
}
