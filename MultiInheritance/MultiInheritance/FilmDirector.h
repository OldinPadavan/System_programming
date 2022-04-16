#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "Film.h"
#include "Director.h"

class FilmDirector :
    public Film, public Director
{
public:
    FilmDirector();
    FilmDirector(string name, string last_name, string company_name, Film filmlist []);
    ~FilmDirector();
    virtual void showInfo() override;
private:
    Film *filmList;

};

FilmDirector::FilmDirector() : Director() {
    filmList = new Film[10];
    for (int i = 0; i < sizeof(filmList) / sizeof(filmList[0]); i++) {
        filmList[i] = Film();
    }
}
FilmDirector::FilmDirector(string first_name, string last_name, string company_name, Film filmlist[]) : Director(first_name, last_name, company_name) {
    this->filmList = filmlist;
}
FilmDirector::~FilmDirector() {
    cout << "Call FilmDirector's destructor" << endl;
}
void FilmDirector::showInfo() {
    Director::showInfo();
    cout << "All movies list: " << endl;
    for (int i = 0; i < sizeof(filmList) / sizeof(filmList[0]); i++) {
        filmList[i].showInfo();
    }
}



