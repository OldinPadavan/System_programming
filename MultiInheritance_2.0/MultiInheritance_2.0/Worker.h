#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;
class Worker
{
public:
    Worker();
    Worker(string first_name, string last_name);
    ~Worker();
    virtual void showInfo();


private:
    string first_name;
    string last_name;
};

