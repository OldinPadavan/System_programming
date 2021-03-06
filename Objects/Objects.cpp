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

public:
    excavator(double weight, double max_lift_weight, int driver_seat_cout, string vendor, string model_name) {
        this->weight = weight;
        this->max_lift_weight = max_lift_weight;
        this->driver_seat_count = driver_seat_cout;
        this->vendor = vendor;
        this->model_name = model_name;
    }
    excavator() {
        weight = 3000.0;
        max_lift_weight = 1500.0;
        int driver_seat_count = 2;
        model_name = "309 CR VAB";
        vendor = "Caterpillarr";
    }

    double getWeight() {
        return weight;
    }

    double getMax_lift_weight() {
        return max_lift_weight;
    }

    void ShowModelNameAndVendor() {
        cout << "model: "<< model_name << endl;
        cout << "vendor: " << vendor << endl;
    }
};

class crane {
    double max_lift_weight;
    double height;
    double weight;
    string vendor;
    string model_name;

public:
    crane(double max_lift_weight, double height, double weight, string vendor, string model_name) {
        this->max_lift_weight = max_lift_weight;
        this->height = height;
        this->weight = weight;
        this->vendor = vendor;
        this->model_name = model_name;
    }
    crane() {
        max_lift_weight = 5000.0;
        height = 3000.0;
        weight = 7000.0;
        vendor = "Liebherr";
        model_name = "132EC-H8 Litronic";
    }

    double getWeight() {
        return weight;
    }

    double getMax_lift_weight() {
        return max_lift_weight;
    }

    double getHeight() {
        return height;
    }

    void ShowModelNameAndVendor() {
        cout << "model: " << model_name << endl;
        cout << "vendor: " << vendor << endl;
    }
};

class paver /*асфальтоукладчик*/ {
    double weight;
    double transported_weight;
    double storage_capacity;
    string vendor;
    string model_name;

public :

    paver(double weight, double transported_weight, double storage_capacity, string vendor, string model_name) {
        this->weight = weight;
        this->transported_weight = transported_weight;
        this->storage_capacity = storage_capacity;
        this->vendor = vendor;
        this->model_name = model_name;
    }
    paver() {
        weight = 5000.0;
        transported_weight = 4500.0;
        storage_capacity = 1500.0;
        vendor = "Tesla";
        model_name = "Semi";
    }

    double getWeight() {
        return weight;
    }

    double getTransported_weight() {
        return transported_weight;
    }

    double getStorageCapacity() {
        return storage_capacity;
    }

    void ShowModelNameAndVendor() {
        cout << "model: " << model_name << endl;
        cout << "vendor: " << vendor << endl;
    }
};

class tractor {
    double weight;
    double max_speed;
    int driver_seat_count;
    string vendor;
    string origin_made_country;

public:

    tractor(double weight, double max_speed, int driver_seat_count, string vendor, string original_made_country) {
        this->weight = weight;
        this->max_speed = max_speed;
        this->driver_seat_count = driver_seat_count;
        this->vendor = vendor;
        this->origin_made_country = original_made_country;
    }
    tractor() {
        weight = 5000.0;
        max_speed = 160.0;
        driver_seat_count = 1;
        vendor = "Belarus";
        origin_made_country = "Беларусь";
    }

    double getWeight() {
        return weight;
    }

    double getMaxSpeed() {
        return max_speed;
    }

    int getDriverSeatCount() {
        return driver_seat_count;
    }

    void ShowVendorAndMadeCountry() {
        cout << "vendor: " << vendor << endl;
        cout << "Made in : " << origin_made_country << endl;
    }
};

int main()
{

    truck trucks_mass[] = { truck(), truck(), truck(), truck(), truck(), truck(), truck()};
    excavator excavator_mass[] = { excavator(), excavator(), excavator(), excavator(), excavator(), excavator(), excavator() };
    crane crane_mass[] = { crane(), crane(), crane(), crane(), crane(), crane(), crane() };
    paver paver_mass[] = { paver(), paver(), paver(), paver(), paver(), paver(), paver() };
    tractor tractor_mass[] = { tractor(), tractor(), tractor(), tractor(), tractor(), tractor(), tractor() };


    for (truck truck : trucks_mass) {
        truck.ShowRegistrationNumber();
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
