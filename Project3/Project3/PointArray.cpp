#include "PointArray.h"

PointArray::PointArray(int size)
{
	size_ = size;
	ptr_ = new Point[size];
}

int PointArray::Size() const
{
	return size_;
}

Point PointArray::Get(int index) const
{
	return ptr_[index];
}

void PointArray::Set(int index, const Point& point)
{
	ptr_[index] = point;
}