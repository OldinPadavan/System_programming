// Worker.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Worker {
public:
    int age;
    string name;
    int mood_rate;

    Worker() {
        cin >> age;
        cin >> name;
        setMood_byDefault();
    }

    void showFields() {
        cout << this->age << endl;
        cout << this->name << endl;
        cout << this->get_weight() << endl;
    }

    void eating(float input_meal);
    float get_weight();
    void setMood_byDefault();

private:
    float weight;
    int mood;
};

void Worker::eating(float input_meal) {
    if (input_meal > 10.0) {
        age++;
        weight = weight + (input_meal / 2);
        return;
    }
    weight = weight + input_meal;
}
void Worker::setMood_byDefault() {
    mood = 10;
}
float Worker::get_weight() {
    return weight;
}

int main()
{
    setlocale(LC_ALL, "");
    Worker *worker1 = new Worker();
    worker1->age = 34;
    worker1->name = "Иванов";
    worker1->showFields();

    worker1->eating(5.0);
    worker1->eating(3.0);
    worker1->showFields();
    worker1->eating(15.0);
    worker1->showFields();
    

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
