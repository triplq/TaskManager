#ifndef ADMIN_H
#define ADMIN_H

#include "taskmanager.h"
#include "QMessageBox"

class Admin
{
private:
    QWidget *parent;
public:
    Admin(QWidget *parent);
    void addTask(const int& id, const std::string& description, const bool& status);
};

#endif // ADMIN_H
