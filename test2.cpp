// test.cpp
#include <iostream>
#include "polygon.h"
int main()
{
	Polygon p;
	p.add(-5, -5);
	p.add(-5, 25);
	p.add(15, 25);
	p.add(15, -5);
	
	cout << "Area = " << p.get_area() << "\n";
	return 0;
}