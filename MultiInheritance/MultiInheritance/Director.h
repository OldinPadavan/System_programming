#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "Worker.h"
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

Director::Director() : Worker() {
    company_name = "Unknown company";
}
Director::Director(string first_name, string last_name, string company_name) : Worker(first_name, last_name) {
    this->company_name = company_name;
};
Director::~Director() {
    cout << "call Director's class destructor" << endl;
};
void Director::showInfo() {
    Worker::showInfo();
    cout << "Company's name: " + this->company_name << endl;
};

