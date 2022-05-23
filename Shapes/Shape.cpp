#include "Shape.h"



double AreaOfTriangle(Point2D A, Point2D B, Point2D C)
{
	double area = (A.GetX() * (B.GetY() - C.GetY()) + B.GetX() * (C.GetY() - A.GetY()) + C.GetX() * (A.GetY() - B.GetY())) / 2;
	return area < 0 ? -area : area;
}


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
	return (left_corner.GetX() <= point2D.GetX() && left_corner.GetY() <= point2D.GetY() && right_corner.GetX()>= point2D.GetX() && right_corner.GetY() >= point2D.GetY());
}
double Rectangle::Area() const
{
	double area = (left_corner.GetX() - right_corner.GetX()) * (right_corner.GetY() - left_corner.GetY());
	return area<0 ? -area : area;
}


void Triangle::Write()
{
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
}
bool Triangle::Contains(Point2D const point2D) const
{
	double area = Area();
	double a1, a2, a3;
	a1 = AreaOfTriangle(A, B, point2D);
	a2 = AreaOfTriangle(A, C, point2D);
	a3 = AreaOfTriangle(B, C, point2D);
	return area == a1 + a2 + a3;
}
double Triangle::Area() const
{
	return AreaOfTriangle(A, B, C);
}