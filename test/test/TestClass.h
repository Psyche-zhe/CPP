#pragma once
#include <iostream>
#include <string>
using namespace std;
class TestClass
{
public:
	TestClass();
	void ShowInfo();
	~TestClass();
private:
	int age;
	std::string name;
};

