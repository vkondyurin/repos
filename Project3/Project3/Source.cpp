#include <iostream>
#include "Point.h"

#include "Point.h"

int main()
{
	Point p;
	Point p1(1.423, 4.54);
	p.Print();




	cout << "¬ведите количество точек:" << endl;
	int N;
	cin >> N;





	PointArray points(10);











	Point* points = new Point[N];
	points[i] = Point(1,3);
	
	
	for(int i = 0; i < points.Size(); i++)

	points.Set(i, Point(1, 3));
	Point p = points.Get(i);
	p.Print();


	Point* points = new Point[N];
	cout << "¬ведите точки:" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> points[i].x;
		cin >> points[i].y;
	}

	for (int i = 0; i < N; i++)
	{
		points[i].ShiftX(10);
		Print(points[i]);
	}
}