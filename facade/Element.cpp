/**
 * @file Element.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Element.h"
#include <iostream>
#include <cstdlib>

Element::Element()
{
	std::cout << "Element::" << __FUNCTION__ << std::endl;
}

Element::~Element()
{
	std::cout << "Element::" << __FUNCTION__ << std::endl;
}
