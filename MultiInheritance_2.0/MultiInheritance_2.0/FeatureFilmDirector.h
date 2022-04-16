#pragma once
#include "FilmDirector.h"
class FeatureFilmDirector :
    public FilmDirector
{
public:
    FeatureFilmDirector();
    FeatureFilmDirector(string first_name, string last_name, string company_name, Film listFilm[], string original_idea_author);
    ~FeatureFilmDirector();
    void showInfo() override;
private:
    string original_idea_author;
};

