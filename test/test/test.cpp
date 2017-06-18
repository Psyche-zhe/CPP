#include <iostream>

int main(int argc, char *argv[])
{	
	std::cout << "first test!" << std::endl;
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	std::cout << ival << "\t" << &ival << std::endl;
	std::cout << *pi << "\t" << pi << std::endl;
	std::cout << **ppi << "\t" << ppi << std::endl;

	return 0;
}