#pragma once
#include<cmath>
#include<iostream>
class Point2D
{
private:
	double x_axis;
	double y_axis;
public:
	Point2D(double x_axis = 0, double y_axis = 0)
	{
		this->x_axis = x_axis;
		this->y_axis = y_axis;
	}
	double GetX() const
	{
		return this->x_axis;
	}
	double GetY() const
	{
		return this->y_axis;
	}
	double GetVectorLength() const
	{
		return sqrt(this->x_axis * this->x_axis + this->y_axis * this->y_axis);
	}
	double Distance(Point2D const &other) const
	{
		Point2D copy(*this);
		copy.x_axis -= other.x_axis;
		copy.y_axis -= other.y_axis;
		return copy.GetVectorLength();
	}
	friend std::istream& operator>>(std::istream& in, Point2D& point)
	{
		in >> point.x_axis;
		in >> point.y_axis;
		return in;
	}

};

