#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;
#pragma once
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

Worker::Worker() {
    this->first_name = "John";
    this->last_name = "Doe";
};
Worker::Worker(string first_name, string last_name) {
    this->first_name = first_name;
    this->last_name = last_name;
};
Worker::~Worker() {
    cout << "call destructor" << endl;
}
void Worker::showInfo() {
    cout << "First name: " + this->first_name + " Last name: " + this->last_name << endl;
};