#include "Point.h"
#include<iostream>
Point::Point() {
	x = 0;
	y = 0;
}
//setter
void Point::setX(const double& x_) { x = x_; }
void Point::setY(const double& y_) { y = y_; }
//getter
const double& Point::getX() const { return x; }
const double& Point::getY() const { return y; }
//interface
void Point::distance_to_origin() {
	std::cout<<"the distance to origin is " <<pow((x*x + y*y), 0.5);
}
double Point::distance_to_point(const Point& p) {
	/*std::cout <<"the distance of point(x,y) to point p is "<< pow((x-p.x)* (x - p.x)+ (y - p.y) * (y - p.y), 0.5);	*/
	return pow((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y), 0.5);
}
ostream& operator<<(ostream& os, const Point& p) {
	os << "the coordinates of the point is " << "(" << p.getX() << "," << p.getY() << ")";
	return os;
};