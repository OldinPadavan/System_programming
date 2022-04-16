#include "FeatureFilmDirector.h"


FeatureFilmDirector::FeatureFilmDirector() : FilmDirector() {
    this->original_idea_author = "John Doe";
}
FeatureFilmDirector::FeatureFilmDirector(string first_name, string last_name, string company_name, Film listFilm[], string original_idea_author) : FilmDirector(first_name, last_name, company_name, listFilm) {
    this->original_idea_author = original_idea_author;
}
FeatureFilmDirector::~FeatureFilmDirector() {
    cout << "Called FeatureFilmDirector's destructor" << endl;
}
void FeatureFilmDirector::showInfo() {
    cout << "FeatureFilm Director: " << endl;
    FilmDirector::showInfo();
    cout << "Main author of idea is " + this->original_idea_author << endl;
}