#include <iostream>
#include <cstdlib>

#include "Databasefacade.h"
#include "Point.h"

int main()
{
	std::cout << "Hello, Wandbox!" << std::endl;
	DatabaseFacade db_f;
	db_f.doSomething();

	Point p;
	p.setLocation(0, 0);
	return 0;
}