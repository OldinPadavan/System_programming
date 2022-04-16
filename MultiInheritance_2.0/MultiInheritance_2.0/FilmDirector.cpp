#include "FilmDirector.h"

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
    cout << "Film Director: " << endl;
    Director::showInfo();
    cout << "All movies list: " << endl;
    for (int i = 0; i < sizeof(filmList) / sizeof(filmList[0]); i++) {
        filmList[i].showInfo();
    }
}
