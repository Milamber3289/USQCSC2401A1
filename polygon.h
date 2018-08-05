#ifndef Polygon_H
#define Polygon_H
class Polygon {
public:
	void add(double x, double y); // add a vertex
	double get_area() const; // a recursive function
private:
	vector<double> xs; // x-coordinates of the vertices
	vector<double> ys; // corresponding y-coordinates
};
#endif