// ConstructAndDestruct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

class MyString
{
public:
    MyString();
    MyString(string input_string);
    MyString(const MyString &old_string);
    ~MyString();
private:
    int string_lenght;
    char* my_string = new char[string_lenght];
    bool IsAlphabet(char ch);
    string RemoveAllNumbers(string checking_string);
};

MyString::MyString()
{
    string default_string = "default string";
    string_lenght = default_string.length();
    my_string = new char(string_lenght);
    for (int i = 0; i < string_lenght; i++) {
        my_string[i] = default_string[i];
    }
}
MyString::MyString(string input_string)
{
    if (input_string.length() > 10) {

   }
}
MyString::~MyString()
{
   
}

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
