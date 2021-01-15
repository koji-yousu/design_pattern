/**
 * @file facade.cpp
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

#include "facade.h"
#include "element.h"
#include "model.h"

Facade::Facade(/* args */)
{
	std::cout << "Facade constructor" << std::endl;
}

Facade::~Facade()
{
	std::cout << "Facade destructor" << std::endl;
}

void Facade::doSomething()
{
	Element e;
	Model m(e);
	m_db.Save(m);
}