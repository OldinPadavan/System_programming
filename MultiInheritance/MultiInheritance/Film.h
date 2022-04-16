#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
class Film
{
public:
    Film();
    Film(string title, string titre);
    ~Film();
    virtual void showInfo();

private:
    string title;
    string titre;
};

Film::Film() {
    title = "new film";
    titre = "This is Unknow film. Director: Unkown. Cast:...";
}

Film::Film(string  title, string titre) {
    this->title = title;
    this->titre = titre;
}
Film::~Film() {
    cout << "Call Film's class destructor" << endl;
}

void Film::showInfo() {
    cout << "It's the film: " + this->title + ". Titre: " + this->titre << endl;
}

