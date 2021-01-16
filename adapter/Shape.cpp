/**
 * @file Shape.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Shape.h"
#include <iostream>

Shape::Shape(): m_x{0}, m_y{0}, m_r{0}, m_g{0}, m_b{0}, m_a{0}
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;
}

Shape::~Shape()
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;
}

void Shape::setLocation(std::int32_t x, std::int32_t y)
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;
	m_x = x;
	m_y = y;
}

location Shape::getLocation()
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;

	location ret;
	ret.x = m_x;
	ret.y = m_y;

	return ret;
}

void Shape::display()
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;
}

void Shape::undisplay()
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;
}

void Shape::fill()
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;
}

void Shape::setColor(color c)
{
	std::cout << "Shape::" << __FUNCTION__ << std::endl;

	m_r = c.r;
	m_g = c.g;
	m_b = c.b;
	m_a = c.a;
}
