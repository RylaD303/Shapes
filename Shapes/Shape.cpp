#include "Shape.h"

void Circle::Write()
{
	std::cin >> centre;
	std::cin >> radius;
}
bool Circle::Contains(Point2D const point2D) const
{
	return (centre.Distance(point2D) <= radius);
}
double Circle::Area() const
{
	return (3.14 * radius * radius);
}


void Rectangle::Write()
{
	std::cin >> left_corner;
	std::cin >> right_corner;
}
bool Rectangle::Contains(Point2D const point2D) const
{
	double diagonal = left_corner.Distance(right_corner);
	Point2D other_left(left_corner.GetX(), right_corner.GetY());
	Point2D other_right(right_corner.GetX(), left_corner.GetY());
	return (left_corner.Distance(point2D) <= diagonal && right_corner.Distance(point2D) <= diagonal && other_left.Distance(point2D) <= diagonal && other_right.Distance(point2D) <= diagonal);
}
double Rectangle::Area() const
{
	double area = (left_corner.GetX() - right_corner.GetX()) * (right_corner.GetY() - left_corner.GetY());
	return area<0 ? -area : area;
}