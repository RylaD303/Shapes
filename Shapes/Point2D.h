#pragma once
#include<cmath>
class Point2D
{
private:
	double x_axis;
	double y_axis;
public:
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
};

