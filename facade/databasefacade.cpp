/**
 * @file databasefacade.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cstdlib>

#include "databasefacade.h"
#include "element.h"
#include "model.h"

DatabaseFacade::DatabaseFacade(/* args */)
{
	std::cout << "DatabaseFacade constructor" << std::endl;
}

DatabaseFacade::~DatabaseFacade()
{
	std::cout << "DatabaseFacade destructor" << std::endl;
}

void DatabaseFacade::doSomething()
{
	Element e;
	Model m(e);
	m_db.Save(m);
}