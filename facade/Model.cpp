/**
 * @file Model.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Model.h"
#include <iostream>
#include <cstdlib>

Model::Model()
{
	std::cout << "Model::" << __FUNCTION__ << std::endl;
}

Model::Model(Element &e)
{
	std::cout << "Model::" << __FUNCTION__ << std::endl;
}

Model::~Model()
{
	std::cout << "Model::" << __FUNCTION__ << std::endl;
}
