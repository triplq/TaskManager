#ifndef ADMIN_H
#define ADMIN_H

#include "taskmanager.h"

class Admin
{
public:
    void addTask(const std::string& description);
    void deleteTask(const std::string &description);
    void editTask(int id, const std::string& new_descrip);
    void completeTask(int id);
    void setIncompleteTask(int id);
};

#endif // ADMIN_H
