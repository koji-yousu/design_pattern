/**
 * @file databasefacade.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef DATABASEFACADE_H
#define DATABASEFACADE_H

#include "Database.h"

class DatabaseFacade
{
private:
	Database m_db;

public:
	DatabaseFacade(/* args */);
	~DatabaseFacade();
	void doSomething();
};

#endif // DATABASEFACADE_H

