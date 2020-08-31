#include "Point.h"
#include<iostream>

using namespace std;
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
const double &Point::length() {
	return pow(x*x + y*y, 0.5);
}
//double Point::distance_to_point(const Point& p) {
//	/*std::cout <<"the distance of point(x,y) to point p is "<< pow((x-p.x)* (x - p.x)+ (y - p.y) * (y - p.y), 0.5);	*/
//	return pow((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y), 0.5);
//}

	Point Point::operator-() {
		Point p;
		p.x = -x;
		p.y = -y;
		return p;
	}
	Point Point::operator+=(const Point& a) {
		this->x=(x + a.x);
		this->y=(y + a.y);
		return *this;
		
	}
	Point Point::operator-=(const Point& a) {
		this->x=(x - a.x);
		this->y=(y - a.y);
		return *this;
	}
	Point Point::operator+(const Point& a) {
		Point p;
		p.x = this->x + a.x;
		p.y = this->y + a.y;
		return p;
	}
	Point Point::operator-(const Point& a) {
		 Point p;
		p.x = this->x - a.x;
		p.y = this->y - a.y;
		return p;
	}
	double Point::operator/(const Point& a) {
		return pow((x * x + y * y), 0.5) / pow((a.x * a.x + a.y * a.y), 0.5);
	}
	bool Point::operator>(const Point& a) {
		if (pow((x * x + y * y), 0.5) > pow((a.x * a.x + a.y *a.y), 0.5))
			return true;
		else
			return false;
	}
	bool Point::operator<(const Point& a) {
		if (pow((x * x + y * y), 0.5) < pow((a.x * a.x + a.y * a.y), 0.5))
			return true;
		else
			return false;
	}
	ostream& operator<<(ostream& os, const Point& p) {
		os <<  "(" << p.getX() << "," << p.getY() << ")"<<endl;
		return os;
	}
	istream& operator >>(istream& is,  Point& p) {
		is >> p.x >> p.y;
		return is;
	}
	const double&Point:: dot(const Point& p)const {
		double dot;
		dot = x * p.getX() + y * p.getY();
		return dot;
	}