// Isosceles_triangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <cmath>
#include <random>
using std::cin;
using std::cout;
using std::endl;

class Isosceles_Triangle {
    
    double side;
    double base_angle;
    double base;

public :
    
    Isosceles_Triangle(double side, double age) {
        this->side = side;
        base_angle = age;
        base = findBase(side, base_angle);
    }
    Isosceles_Triangle() {
        side = getRandomSide();
        base_angle = getRandomAge();
        base = findBase(side, base_angle);
    }

    bool setSide(double new_side) {
        if (new_side > 0) {
            side = new_side;
            return true;
        }
        else {
            cout << "Input value error" << endl;
            return false;
        }
    }
    bool setAge(double new_age) {
        if (new_age > 0) {
            base_angle = new_age;
            return true;
        }
        else {
            cout << "Input value error" << endl;
            return false;
        }
    }

    double getSide() {
        return side;
    }
    double getBase_age() {
        return base_angle;
    }
    double getBase() {
        return base;
    }

    void increasAllSide(int multiplier) {

        if (multiplier != 0) {
            side *= multiplier;
            base_angle *= multiplier;
        }
        else {
            cout << "Unsupported input values, Error." << endl;
        }
    }
       

    void deincreasAllSide(int devider) {
        if ((side / devider > 0) && (base_angle / devider > 0)) {
            side /= devider;
            base_angle /= devider;
        }
        else {
            cout << "Unsupported input values, Error." << endl;
        }
    }

    double findHeight(double side, double base_age, double base) {
        double height = pow(2, side * side - (side * side / 4));
        return height;
    }


private :
     static double getRandomSide() {
         std::random_device rd;
         std::mt19937 rng(rd());
         std::uniform_real_distribution<double> uni(5.0, 80.0);
         double random_double_side = uni(rng);
         return random_double_side;
    }
     static double getRandomAge()
    {
         std::random_device rd;
         std::mt19937 rng(rd());
         std::uniform_real_distribution<double> uni(30.0, 90.0);
         double random_double_age = uni(rng);
         return random_double_age;
    }
     static double findBase(double side, double base_angle) {
         double base = 2 * (side * sin((180 - 2 * base_angle) / 2));
         return base;
     }
};

int main()
{
    Isosceles_Triangle object_Mass[] = {Isosceles_Triangle(), Isosceles_Triangle(), Isosceles_Triangle()};
    for (Isosceles_Triangle triangle : object_Mass) {
        cout << triangle.getSide() << endl;
        cout << triangle.getBase_age() << endl;
        triangle.increasAllSide(2);
        cout << triangle.findHeight(triangle.getSide(), triangle.getBase_age(), triangle.getBase()) << endl;

    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
