#pragma once
#include "Quadrangle.h"
class Rhombus :
    public Quadrangle
{
public:
    Rhombus();
    Rhombus(int ax, int bx, int cx, int dx, int ay, int by, int cy, int dy);
    bool ifRhombus();
private:
    bool isRhombus;
};

