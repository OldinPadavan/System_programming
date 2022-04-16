#pragma once
#include "FilmDirector.h"
class DocumentaryFilmDirector :
    public FilmDirector
{
public:
    DocumentaryFilmDirector();
    DocumentaryFilmDirector(string first_name, string last_name, string company_name, Film listFilm[], string sourcesList[]);
    ~DocumentaryFilmDirector();
    void showInfo() override;
private:
    string* sourcesList;
};

