/**
 * @file model.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "model.h"
#include <iostream>
#include <cstdlib>

Model::Model()
{
	std::cout << "Model constructor" << std::endl;
}

Model::Model(Element &e)
{
	std::cout << "Model constructor element" << std::endl;
}

Model::~Model()
{
	std::cout << "Model destructor" << std::endl;
}
