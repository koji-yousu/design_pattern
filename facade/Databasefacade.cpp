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

#include "Databasefacade.h"
#include "Element.h"
#include "Model.h"

DatabaseFacade::DatabaseFacade(/* args */)
{
	std::cout << "DatabaseFacade::" << __FUNCTION__ << std::endl;
}

DatabaseFacade::~DatabaseFacade()
{
	std::cout << "DatabaseFacade::" << __FUNCTION__ << std::endl;
}

void DatabaseFacade::doSomething()
{
	std::cout << "DatabaseFacade::" << __FUNCTION__ << std::endl;

	Element e;
	Model m(e);
	m_db.Save(m);
}