

#include <iostream>
#include "Shape.h"

int main()
{
	Shape* shapes[10];
	unsigned int n, size =0;
	std::cin >> n;
	while (n < 4)
	{
		if (n == 0)
		{
			Circle circle;
			circle.Write();
			shapes[size] = &circle;
			size++;
		}
		if (n == 1)
		{
			Triangle triangle;
			triangle.Write();
			shapes[size] = &triangle;
			size++;
		}
		if (n == 2)
		{
			Rectangle rectangle;
			rectangle.Write();
			shapes[size] = &rectangle;
			size++;
		}
		if (n == 3)
		{
			Point2D point;
			std::cin >> point;
			std::cout << "The point is in ";
			bool in_figure = false;
			for (int i = 0; i < size; i++)
			{
				if (shapes[i]->Contains(point))
				{
					if (in_figure)std::cout << ", ";
					std::cout << "shape number " << i + 1;
				}
			}
			if (!in_figure) std::cout << "none of the figures.";
			else std::cout << ".";
		}
	}
}

