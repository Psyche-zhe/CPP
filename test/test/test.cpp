#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "TestClass.h"
using namespace std;

int main(int argc, char *argv[])
{	
	std::cout << "first test!" << std::endl;
	/*int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	std::cout << ival << "\t" << &ival << std::endl;
	std::cout << *pi << "\t" << pi << std::endl;
	std::cout << **ppi << "\t" << ppi << std::endl;
	int i = 10;
	const int &re = i;
	std::cout << i << "\t" << re << std::endl;
	i = 13;
	std::cout << i << "\t" << re << std::endl;
	double dval = 3.14;
	const int &ri = dval;
	std::cout << ri << std::endl;*/
	/*std::string basicstr = "";
	while (getline(std::cin, basicstr)){
		if (!basicstr.empty()){
			std::cout << basicstr << std::endl;
		}
	}*/
	std::string str("hello world!");
	for (auto c : str)
	{
		std::cout << c << std::endl;
	}
	TestClass testclass;
	testclass.ShowInfo();
	return 0;
}