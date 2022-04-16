#include "DocumentaryFilmDirector.h"


DocumentaryFilmDirector::DocumentaryFilmDirector() : FilmDirector() {
    sourcesList = new string[10];
    for (int i = 0; i < sizeof(sourcesList) / sizeof(sourcesList[0]); i++) {
        sourcesList[i] = "new sources";
    }
}
DocumentaryFilmDirector::DocumentaryFilmDirector(string first_name, string last_name, string company_name, Film listFilm[], string sourcesList[]) : FilmDirector(first_name, last_name, company_name, listFilm) {
    this->sourcesList = sourcesList;
}
DocumentaryFilmDirector::~DocumentaryFilmDirector() {
    cout << "Called  DocumentaryFilmDirector's destructor" << endl;
}
void  DocumentaryFilmDirector::showInfo() {
    cout << "DocumentaryFilm Director: " << endl;
    FilmDirector::showInfo();
    cout << "All sources list: " << endl;
    for (int i = 0; i < sizeof(sourcesList) / sizeof(sourcesList[0]); i++) {
        cout << sourcesList[i] << endl;
    }
}