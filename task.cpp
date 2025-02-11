#include "task.h"

Task::Task(int id, const std::string &descrip, bool complete)
    : id(id), descrip(descrip), complete(complete) { };

void Task::setId(unsigned id) { this->id = id; };
void Task::setDesc(const std::string& desc) { this->descrip = desc; };
void Task::setComplete(bool complete) { this->complete = complete; };

std::string Task::toString() const {
    return "ID: " + std::to_string(id) + ", Description: " + descrip + ", Status: " + (complete ? "Completed" : "Pending");
}
