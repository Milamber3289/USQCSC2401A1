#include "polygon.h"
//Implementation of Convex Polygon class member functions
void Polygon::add(double x, double y){
	xs.push_back(x);
	ys.push_back(y);
}

double Polygon::get_area() const{
	//If <3 vertices, return area of 0
	if(xs.size()<3||ys.size()<3){
		return 0;
	}
	
	//If exactly 3 vertices, calculate area of triangle
	if(xs.size()==3||ys.size()==3){
		return abs((xs.at(0)*ys.at(1)+xs.at(1)*ys.at(2)+xs.at(2)*ys.at(0)-ys.at(0)*xs.at(1)-ys.at(1)*xs.at(2)-ys.at(2)*xs.at(0))/2);
	}
	
	//calculate area of a triangular slice
	double slice_area = abs((xs.at(0)*ys.at(1)+xs.at(1)*ys.at(2)+xs.at(2)*ys.at(0)-ys.at(0)*xs.at(1)-ys.at(1)*xs.at(2)-ys.at(2)*xs.at(0))/2);

	//make new polygon of remaining area 
	Polygon remaining_area;
	remaining_area.add(xs.at(0),ys.at(0));
	remaining_area.add(xs.at(2),ys.at(2));
	for(int i=3, xs_size=xs.size();i<xs_size;i++){
		remaining_area.add(xs.at(i),ys.at(i));
	}
	
	//return sum of remaining area & this slice's area
	return slice_area + remaining_area.get_area();

	
}