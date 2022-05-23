#pragma once
#include "Point2D.h"
class Shape
{
public:
	//virtual void Print() const;
	virtual void Write();
	virtual bool Contains(Point2D const point2D) const;
	virtual double Area() const;
};

class Circle : public Shape
{
private:
	Point2D centre;
	double radius;
public:
	void Write() override;
	bool Contains(Point2D const point2D)const override;
	double Area() const override;
};

class Triangle : public Shape
{
private:
	Point2D A;
	Point2D B;
	Point2D C;
public:
	void Write() override;
	bool Contains(Point2D const point2D)const override;
	double Area() const override;
};

class Rectangle : public Shape
{
private:
	Point2D left_corner;
	Point2D right_corner;
public:
	void Write() override;
	bool Contains(Point2D const point2D)const override;
	double Area() const override;
};


