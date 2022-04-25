// Lab_Four.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <iostream>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Rhombus.h"
#include "Quadrangle.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int quadrangleCount;
    int rhombusCount;
    cout << "Input quadrangle count: " << endl;
    cin >> quadrangleCount;
    cout << "Input rhombus count: " << endl;
    cin >> rhombusCount;
    Quadrangle* quadrangleList = new Quadrangle[quadrangleCount];
    Rhombus* rhombusList = new Rhombus[rhombusCount];

    
    
    double minimalPerimeter = 0;
    Quadrangle minPerimeter;
    for (int i = 0; i < quadrangleCount; i++) {
        if (i == 0) {
            minimalPerimeter = quadrangleList[0].calcPerimetre();
        }
        if (minimalPerimeter > quadrangleList[i].calcPerimetre()) {
            minimalPerimeter = quadrangleList[i].calcPerimetre();
            minPerimeter = quadrangleList[i];
        }
       
    }
    cout << "Наименьший периметер равен = " << minimalPerimeter << endl;
    cout << "Самый маленький четырехугольник = ";
    minPerimeter.showInfo();

    long averageSquare = 0;
    for (int i = 0; i < rhombusCount; i++) {
        averageSquare += rhombusList[i].calcSquare();
    }
    cout << "Средняя площадь ромбов = ";
    cout << averageSquare / rhombusCount << endl;

    
    
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
