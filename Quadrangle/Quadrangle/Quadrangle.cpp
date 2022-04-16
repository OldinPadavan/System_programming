// Quadrangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

class Quadrangle
{
public:
	Quadrangle(double a, double b, double c, double d);
	~Quadrangle();

private:
	double dot_A;
	double dot_B;
	double dot_C;
	double dot_D;
};

Quadrangle::Quadrangle(double a, double b, double c, double d)
{
	dot_A = a;
	dot_B = b;
	dot_C = c;
	dot_D = d;
}

Quadrangle::~Quadrangle()
{
	cout << "Destructor called" << endl;
}
class Rhombus : public Quadrangle
{
public:
	Rhombus();
	~Rhombus();

private:

};

Rhombus : public Quadrangle::Rhombus : public Quadrangle()
{
}

Rhombus : public Quadrangle::~Rhombus : public Quadrangle()
{
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
