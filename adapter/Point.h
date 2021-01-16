/**
 * @file Point.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef POINT_H
#define POINT_H

#include <cstdlib>
#include <cstdint>
#include "Shape.h"

class Point : public Shape
{
 private:

 public:
  Point();
	~Point() override;
	void display() override;
	void fill() override;
	void undisplay() override;
};


#endif // POINT_H