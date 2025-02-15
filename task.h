#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    unsigned id;
    std::string descrip;
    bool complete;
public:
    Task(int id = 0, const std::string& descrip = "pop", bool complete = false);

    void setId(unsigned id);
    void setDesc(const std::string& desc);
    void setComplete(bool complete);

    std::string toString() const;
};

#endif // TASK_H

//возможно удалить
