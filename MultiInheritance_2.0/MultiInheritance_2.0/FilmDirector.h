#pragma once
#include "Director.h"
#include "Film.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
class FilmDirector :
    public Director, public Film
{
public:
    FilmDirector();
    FilmDirector(string name, string last_name, string company_name, Film filmlist[]);
    ~FilmDirector();
    virtual void showInfo() override;
private:
    Film* filmList;
};

