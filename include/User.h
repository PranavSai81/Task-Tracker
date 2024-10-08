#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include "UserManager.h" 
using namespace std;

class User : public UserManager
{
private:
    map<int, TaskManager> taskManagers;

public:
    void userdetails(string name1, int id1);
    void runTaskManager(int id);
    friend ostream &operator<<(ostream &out, const User &user);
};

#endif 
