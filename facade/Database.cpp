/**
 * @file Database.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Database.h"
#include <iostream>
#include <cstdlib>

Database::Database(/* args */)
{
	std::cout << "Database::" << __FUNCTION__ << std::endl;
}

Database::~Database()
{
	std::cout << "Database::" << __FUNCTION__ << std::endl;
}

void Database::Save(Model &model)
{
	std::cout << "Database::" << __FUNCTION__ << std::endl;
}