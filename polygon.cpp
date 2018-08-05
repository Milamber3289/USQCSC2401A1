#include "polygon.h"
//Implementation of Convex Polygon class member functions
void Polygon::add(double x, double y){
	xs.push_back(x);
	ys.push_back(y);
}

double Polygon::get_area() const{
	//check if the polygon contains at least 3 vertices
	
	//return triangle area - need to add recursive bit
	return abs((xs.at(0)*ys.at(1)+xs.at(1)*ys.at(2)+xs.at(2)*ys.at(0)-ys.at(0)*xs.at(1)-ys.at(1)*xs.at(2)-ys.at(2)*xs.at(0))/2);
	
	//notes:
	//how do I make this recursive without it having any parameters?
	//need to deal with negatives in the area calcs
	
}