#pragma once
#include "Worker.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

class Director :
    public Worker
{
public:
    Director();
    Director(string first_name, string last_name, string company_name);
    ~Director();
    virtual void showInfo() override;
private:
    string company_name;
};

