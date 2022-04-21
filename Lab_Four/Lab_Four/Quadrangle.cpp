#include "Quadrangle.h"
#include <locale>
#include <iostream>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

Quadrangle::Quadrangle() {
	cout << "Введите координаты для точек:" << endl;
	cout << "aX = ";
	cin >> coorax;
	cout << endl;
	cout << "bX = ";
	cin >> coorbx;
	cout << endl;
	cout << "cX = ";
	cin >> coorcx;
	cout << endl;
	cout << "dX = ";
	cin >> coordx;
	cout << endl;
	cout << "aY = ";
	cin >> cooray;
	cout << endl;
	cout << "bY = ";
	cin >> coorby;
	cout << endl;
	cout << "cY = ";
	cin >> coorcy;
	cout << endl;
	cout << "dY = ";
	cin >> coordy;
	cout << endl;
	cout << "Координаты введены" << endl;

}

Quadrangle::Quadrangle(int ax, int bx, int cx, int dx, int ay, int by, int cy, int dy) {
	cout << "Координаты передаются в аргументах" << endl;
	this->coorax = ax;
	this->coorbx = bx;
	this->coorcx = cx;
	this->coordx = dx;
	this->cooray = ay;
	this->coorby = by;
	this->coorcy = cy;
	this->coordy = dy;
	cout << "Координаты переданы" << endl;
}

void Quadrangle::showInfo() {
	cout << "Информация об объекте: " << endl;
	cout << "Координаты по оси X (" << coorax << ", " << coorbx << ", " << coorcx << ", " << coordx << ")" << endl;
	cout << "Координаты по оси Y (" << cooray << ", " << coorby << ", " << coorcy << ", " << coordy << ")" << endl;
}

void Quadrangle::sidesLegth() {
	double ab, bc, cd, da;
	ab = sqrt(pow((double)coorax - (double)coorbx, 2) + pow((double)cooray - (double)coorby, 2));
	bc = sqrt(pow((double)coorcx - (double)coorbx, 2) + pow((double)coorcy - (double)coorby, 2));
	cd = sqrt(pow((double)coorcx - (double)coordx, 2) + pow((double)coorcy - (double)coordy, 2));
	da = sqrt(pow((double)coorax - (double)coordx, 2) + pow((double)cooray - (double)coordy, 2));
	cout << "Сторона AB = " << ab << " BC = " << bc << " CD = " << cd << " DA = " << da << endl;
}

void Quadrangle::diagonal() {
	double diagonal1, diagonal2;
	diagonal1 = sqrt(pow((double)coorax - (double)coorcx, 2) + pow((double)cooray - (double)coorcy, 2));
	diagonal2 = sqrt(pow((double)coorbx - (double)coordx, 2) + pow((double)coorby - (double)coordy, 2));
	cout << "Диагональ AC = " << diagonal1 << ", диагональ BD = " << diagonal2 << endl;
}

int* Quadrangle::getCoordinates() {
	int coordinates[8];
	coordinates[0] = coorax;
	coordinates[1] = coorbx;
	coordinates[2] = coorcx;
	coordinates[3] = coordx;
	coordinates[4] = cooray;
	coordinates[5] = coorby;
	coordinates[6] = coorcy;
	coordinates[7] = coordy;

	return coordinates;

}

double Quadrangle::calcSquare() {
	double s;
	double cosenus;
	double arccos;
	double diagonal1, diagonal2;
	diagonal1 = sqrt(pow((double)coorax - (double)coorcx, 2) + pow((double)cooray - (double)coorcy, 2));
	diagonal2 = sqrt(pow((double)coorbx - (double)coordx, 2) + pow((double)coorby - (double)coordy, 2));
	cosenus = ((coorcx - coorax) * (coordx - coorbx) + (coorcy - cooray) * (coordy - coorby)) / (diagonal1 * diagonal2);
	arccos = acos(cosenus) * 180 / M_PI;
	s = diagonal1 * diagonal2 * 0.5 * (sin(arccos * M_PI / 180));

	return s;
}

double Quadrangle::calcPerimetre() {
	double ab, bc, cd, da;
	ab = sqrt(pow((double)coorax - (double)coorbx, 2) + pow((double)cooray - (double)coorby, 2));
	bc = sqrt(pow((double)coorcx - (double)coorbx, 2) + pow((double)coorcy - (double)coorby, 2));
	cd = sqrt(pow((double)coorcx - (double)coordx, 2) + pow((double)coorcy - (double)coordy, 2));
	da = sqrt(pow((double)coorax - (double)coordx, 2) + pow((double)cooray - (double)coordy, 2));
	return ab + bc + cd + da;
}