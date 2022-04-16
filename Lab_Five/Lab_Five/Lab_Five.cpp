// Lab_Five.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

static float getSpeed(int dinstane, float time) {
	float seconds = time * 60;
	return dinstane / seconds * 3.6;
}

int main()
{
	setlocale(LC_ALL, "");
	int distance;
	float time;
	cout << "Введите длину дистанции в метрах(м): ";
	cin >> distance;
	cout << endl;
	cout << "Введите время(минуты.секунды): ";
	cin >> time;
	cout << endl;
	cout << "Вы бежали со скоростью: " << fixed << setprecision(2) << getSpeed(distance, time) << " км/час" << endl;
	return 0;
}


