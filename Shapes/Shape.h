#pragma once
#include<iostream>
#include "Point2D.h"
class Shape
{
public:
	virtual friend std::istream& operator>>(std::istream& in, Shape& other);
	virtual friend std::ostream& operator<<(std::ostream& in, Shape& const other);
	virtual bool Contains(Point2D const point2D);
	virtual double Area();
};

