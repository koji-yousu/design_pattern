/**
 * @file Shape.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef SHAPE_H
#define SHAPE_H

#include <cstdlib>
#include <cstdint>

struct location
{
	std::int32_t x;
	std::int32_t y;
};

struct color
{
	std::int32_t r;
	std::int32_t g;
	std::int32_t b;
	std::int32_t a;
};

class Shape
{
 private:
	std::int32_t m_x;
	std::int32_t m_y;

	std::int32_t m_r;
	std::int32_t m_g;
	std::int32_t m_b;
	std::int32_t m_a;

 public:
  Shape();
	virtual ~Shape();
	void setLocation(std::int32_t x, std::int32_t y);
	location getLocation();
	virtual void display();
	virtual void undisplay();
	virtual void fill();
	void setColor(color c);
};


#endif // SHAPE_H