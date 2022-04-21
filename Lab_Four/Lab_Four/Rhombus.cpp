#include "Rhombus.h"
#include <locale>
#include <iostream>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

Rhombus::Rhombus() : Quadrangle() {

    int* coordinates = getCoordinates();
	int coorax = coordinates[0];
	int coorbx = coordinates[1];
	int coorcx = coordinates[2];
	int coordx = coordinates[3];
	int cooray = coordinates[4];
	int coorby = coordinates[5];
	int coorcy = coordinates[6];
	int coordy = coordinates[7];

    double ab, bc, cd, da;
	ab = sqrt(pow((double)coorax - (double)coorbx, 2) + pow((double)cooray - (double)coorby, 2));
	bc = sqrt(pow((double)coorcx - (double)coorbx, 2) + pow((double)coorcy - (double)coorby, 2));
	cd = sqrt(pow((double)coorcx - (double)coordx, 2) + pow((double)coorcy - (double)coordy, 2));
	da = sqrt(pow((double)coorax - (double)coordx, 2) + pow((double)cooray - (double)coordy, 2));

	if((ab == bc) & (bc == cd) & (cd == ab)) {
		cout << "Созданный объект является Ромбом " << endl;
		isRhombus = true;
	}
	else {
		cout << "Созданный объект не Ромб " << endl;
		isRhombus = false;
	}
}
Rhombus::Rhombus(int ax, int bx, int cx, int dx, int ay, int by, int cy, int dy) : Quadrangle(ax, bx, cx, dx, ay, by, cy, dy) {

	double ab, bc, cd, da;
	ab = sqrt(pow((double)ax- (double)bx, 2) + pow((double)ay - (double)by, 2));
	bc = sqrt(pow((double)cx - (double)bx, 2) + pow((double)cy - (double)by, 2));
	cd = sqrt(pow((double)cx - (double)dx, 2) + pow((double)cy - (double)dy, 2));
	da = sqrt(pow((double)ax - (double)dx, 2) + pow((double)ay - (double)dy, 2));

	if ((ab == bc) & (bc == cd) & (cd == ab)) {
		cout << "Созданный объект является Ромбом " << endl;
	}
	else {
		cout << "Созданный объект не Ромб " << endl;
	}
}
bool Rhombus::ifRhombus() {
	return this->isRhombus;
}
