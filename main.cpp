#include <iostream>
#include <cstdlib>

#include "facade.h"

int main()
{
	std::cout << "Hello, Wandbox!" << std::endl;
	Facade f;
	f.doSomething();

	return 0;
}