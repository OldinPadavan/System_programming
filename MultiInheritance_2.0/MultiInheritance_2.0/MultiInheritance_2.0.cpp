// MultiInheritance_2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "Worker.h"
#include "Director.h"
#include "FilmDirector.h"
#include "FeatureFilmDirector.h"
#include "DocumentaryFilmDirector.h"

int main()
{
    Worker workers[5];
    workers[0] = Worker();
    workers[1] = Director();
    workers[2] = FilmDirector();
    workers[3] = FeatureFilmDirector();
    workers[4] = DocumentaryFilmDirector();

    for (int i = 0; i < 5; i++) {
        workers[i].showInfo();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
