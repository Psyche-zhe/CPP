#include "TestClass.h"


TestClass::TestClass() :age(10), name("psyche")
{
	age = 18;
	name = "jack";
}

void TestClass::ShowInfo()
{
	std::cout << "name : "<< name << " , age " << age;
}

TestClass::~TestClass()
{
}
