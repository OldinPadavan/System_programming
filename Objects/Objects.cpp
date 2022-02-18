// Objects.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class truck {
    double weight;
    int max_transprted_weight;
    string vendor;
    string model_name;
    string registration_number;
    
public :
    truck(double weight, int max_transprted_weight, string vendor, string model_name, string registration_number) {
        this->weight = weight;
        this->max_transprted_weight = max_transprted_weight;
        this->vendor = vendor;
        this->model_name = model_name;
        this->registration_number = registration_number;
    }
    truck() {
        weight = 2000.0;
        max_transprted_weight = 5000.0;
        vendor = "Kamaz";
        model_name = "5490-DC NEO";
        registration_number = "Y500ZT78";
    }

    double getWeight() {
        return weight;
    }

    double getMax_moving_weight() {
        return max_transprted_weight;
    }
    
    void ShowRegistrationNumber() {
        cout << registration_number << endl;
    }
};

class excavator {
    double weight;
    double max_lift_weight;
    int driver_seat_count;
    string vendor;
    string model_name;
};

class crane {
    double max_lift_weight;
    double height;
    double weight;
    string vendor;
    string model_name;
};

class paver /*асфальтоукладчик*/ {
    double weight;
    double transported_weight;
    double storage_capacity;
    string vendor;
    string model_name;
};

class tractor {
    double weight;
    double max_speed;
    int driver_seat_count;
    string vendor;
    string origin_made_country;
};

int main()
{
    std::cout << "Hello World!\n";
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
