/**
 * @file Point.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Point.h"
#include <iostream>

Point::Point():Shape()
{
	std::cout << "Point::" << __FUNCTION__ << std::endl;
}

Point::~Point()
{
	std::cout << "Point::" << __FUNCTION__ << std::endl;
}

void Point::display()
{
	std::cout << "Point::" << __FUNCTION__ << std::endl;
}

void Point::fill()
{
	std::cout << "Point::" << __FUNCTION__ << std::endl;
}

void Point::undisplay()
{
	std::cout << "Point::" << __FUNCTION__ << std::endl;
}

