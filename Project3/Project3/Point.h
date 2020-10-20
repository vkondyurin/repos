#pragma once

class Point
{
public:
	Point(double x, double y);
	Point();
	void ShiftX(double dx);
	void Print() const;
	void Read();

	double x;
	double y;
};
