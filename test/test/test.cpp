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
#if 0
	std::string str("hello world!");
	for (auto c : str)
	{
		std::cout << c << std::endl;
	}
#endif
	{
		using std::cout;
		cout << "Using constructor to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Boffo objects", 2, 2.0);
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done!\n";
	}
	return 0;
}