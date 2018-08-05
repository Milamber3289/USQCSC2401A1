// test.cpp
#include <iostream>
#include "polygon.h"
int main()
{
	Polygon p;
	p.add(10, 20);
	p.add(12, 30);
	p.add(20, 20);
	p.add(20, 10);
	p.add(18, 0);
	p.add(10, 10);
	cout << "Area = " << p.get_area() << "\n";
	return 0;
}