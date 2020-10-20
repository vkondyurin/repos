#pragma once

class PointArray
{
public:
	PointArray(int size);
	Point Get(int index) const;
	void Set(int index, const Point& point);


	int Size() const;

private:
	Point* ptr_;
	int size_;
};