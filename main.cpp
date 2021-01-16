#include <iostream>
#include <cstdlib>

#include "databasefacade.h"

int main()
{
	std::cout << "Hello, Wandbox!" << std::endl;
	DatabaseFacade db_f;
	db_f.doSomething();

	return 0;
}