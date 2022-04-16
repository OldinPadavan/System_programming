#include "Worker.h"

Worker::Worker() {
    this->first_name = "John";
    this->last_name = "Doe";
};
Worker::Worker(string first_name, string last_name) {
    this->first_name = first_name;
    this->last_name = last_name;
};
Worker::~Worker() {
    cout << "Called Worker's destructor" << endl;
}
void Worker::showInfo() {
    cout << "First name: " + this->first_name + " Last name: " + this->last_name << endl;
};