#pragma once
using namespace std;

class Quadrangle
{
public:
    Quadrangle();
    Quadrangle(int ax, int bx, int cx, int dx, int ay, int by, int cy, int dy);
    void showInfo();
    void sidesLegth();
    void diagonal();
    int* getCoordinates();
    double calcPerimetre();
    double calcSquare();
private:
    int coorax;
    int coorbx;
    int coorcx;
    int coordx;
    int cooray;
    int coorby;
    int coorcy;
    int coordy;
};

