#include "MyString.h"


using namespace std;

MyString::MyString() {
	cout << "Вызван конструктор по умолчанию..." << endl;
	my_string = NULL;
	my_string_length = 0;
}

MyString::MyString(string text) {
	cout << "Вызван конструктор с параметром..." << endl;
	my_string_length = text.length();
	my_string = new char[my_string_length + 1];
	for (int i = 0; i < my_string_length; i++) {
		my_string[i] = text[i];
	}
	my_string[my_string_length] = '\0';
}

MyString::~MyString() {
	cout << "Вызван деструктор класса..." << endl;
	//delete my_string;
}

void MyString::Set() {
	cout << "Вызван метод Set..." << endl;
	cout << "Введите значение строки: ";
	string input_string;
	getline(cin, input_string);
	cin.clear();


	my_string_length = input_string.length();
	my_string = new char[my_string_length + 1];
	for (int i = 0; i < my_string_length; i++) {
		my_string[i] = input_string[i];
	}
	my_string[my_string_length] = '\0';
}

void MyString::Print() {
	cout << "Вызван метод Print..." << endl;
	cout << my_string << endl;
	cout << endl;
}

void MyString::Update() {
	cout << "Вызван метод Update..." << endl;
	if (this->my_string_length > 10) {
		cout << "Условия соблюдены, начинается изминение исходной строки" << endl;
		cout << "Шаг I: сохранение исходной строки в файл old_string.txt..." << endl;
		ofstream write_OldFile("old_string.txt");
		write_OldFile << my_string;
		write_OldFile.close();
		cout << "Шаг II: изменение исходной строки..." << endl;
		string altered_String(my_string);
		altered_String.erase(remove_if(altered_String.begin(), altered_String.end(), [](char c) { return !isalpha(c); }), altered_String.end());
		delete[]my_string;
		my_string = new char[altered_String.length() + 1];
		for (int i = 0; i < altered_String.length(); i++) {
			my_string[i] = altered_String[i];
		}
		my_string[altered_String.length()] = '\0';

	
		
		cout << "Шаг III: сохранение новой строки в файл new_string.txt..." << endl;
		ofstream write_NewFile("new_string.txt");
		write_NewFile << my_string;
		write_NewFile.close();
		}
	
}