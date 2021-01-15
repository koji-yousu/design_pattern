/**
 * @file facade.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef FACADE_H
#define FACADE_H

#include "database.h"

class Facade
{
private:
	Database m_db;

public:
	Facade(/* args */);
	~Facade();
	void doSomething();
};

#endif // FACADE_H

