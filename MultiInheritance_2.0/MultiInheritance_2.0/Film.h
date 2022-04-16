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

