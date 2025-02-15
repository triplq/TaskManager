#ifndef USER_H
#define USER_H

#include "taskmanager.h"

class User
{
private:
    int id;

public:
    User(int id);

    void completeTask();
};

#endif // USER_H
