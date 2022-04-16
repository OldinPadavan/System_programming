#pragma once
#include <string>
#include <iostream>
#include <fstream> 

using namespace std;

class MyString
{
public:
	MyString();
	MyString(string inputString);
	~MyString();
	void Set();
	void Update();
	void Print();

private:
	char* my_string;
	int my_string_length;
};

