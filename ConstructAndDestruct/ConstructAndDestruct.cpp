// ConstructAndDestruct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <regex>
#include <cstring>
#include <fstream>

using namespace std;

class MyString
{
public:
    MyString();
    MyString(string input_string);
    MyString(const MyString &old_string);
    ~MyString();
    void set(string input_string);
    void update();
    void print();
private:
    int string_lenght;
    char my_string[];
    string RemoveAllNumbers();
};

MyString::MyString()
{
    cout << "Вызван конструктор с параметрами по умолчанию" << endl;
    string default_string = "default string";
    this->string_lenght = default_string.length() + 1;
    my_string[string_lenght];
    strcpy(my_string, default_string.c_str());
}
MyString::MyString(string input_string)
{   
    cout << "Вызван конструток принимающий значение строки" << endl;
     this->string_lenght = input_string.length() + 1;
     my_string[string_lenght];
     strcpy(this->my_string, input_string.c_str());
 
}
MyString::MyString(const MyString& old_string) {
    cout << "Вызван конструктор с функцией копирования" << endl;
    this->string_lenght = old_string.string_lenght;
    my_string[old_string.string_lenght];
    for (int i = 0; i < old_string.string_lenght; i++) {
        my_string[i] = old_string.my_string[i];
    }
    
}
MyString::~MyString()
{
    cout << "Вызван деструктор" << endl;
    
}
string MyString::RemoveAllNumbers() {
    regex reg("[\d-]");
    string str(this->my_string);
    string string_without_numbers = regex_replace(str, reg, "");
    return string_without_numbers;
}
void MyString::set(string new_string) {
    cout << "Вызван метод для установки параметра строки" << endl;
    this->string_lenght = new_string.length();
    my_string[string_lenght];
    for (int i = 0; i < string_lenght; i++) {
        this->my_string[i] = new_string[i];
    }
}
void MyString::update() {
    cout << "Вызван метод для обновления текущей строки с уловием, данные будут записаны в два файла:old_string.txt и new_string" << endl;
    ofstream old_outfile("old_string.txt");
    string str(this->my_string);
    old_outfile << str << endl;
    old_outfile.close();
    if (this->string_lenght > 10) {
        string after_update_string = RemoveAllNumbers();
        strcpy(this->my_string, after_update_string.c_str());
        ofstream new_outfile("new_string.txt");
        new_outfile << after_update_string << endl;
        new_outfile.close();
    }
}
void MyString::print() {
    cout << "Вызван метод для печати текущей строки" << endl;
    for (int i = 0; i < string_lenght; i++) {
        cout << my_string[i];
    }
    cout << endl;

}

int main()
{
    setlocale(LC_ALL, "");
    MyString string1 = MyString();
    //MyString string2 = MyString("Hello");
    //MyString string3 = MyString(string2);
    string1.print();
    //string2.print();
    //string3.print();
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
