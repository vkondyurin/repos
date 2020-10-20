#include <iostream>
#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

void Point::ShiftX(double dx)
{
	x += dx;
}

void Point::Read()
{
	cin >> x;
	cin >> y;
}

void Print(const Point& point)
{
	cout << '(' << point.x << ',' << point.y << ')' << endl;
}