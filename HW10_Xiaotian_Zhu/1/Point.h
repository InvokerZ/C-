#include<iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	//constructor
	Point() ;
	Point(double x_, double y_) :x{ x_ }, y{ y_ }{};
	//destructor
	~Point() {  };
	//setter
	void setX(const double& x_);
	void setY(const double& y_);
	//getter
	const double& getX() const;
	const double& getY() const;
	//interface
	 const double &length() ;
	/*double distance_to_point(const Point&p);*/
	friend ostream& operator<<(ostream& os, const Point& p);
	friend istream& operator>>(istream& is,  Point& p);
	//overload operator functions
	Point operator-();
	Point operator+=(const Point& a);
	Point operator-=(const Point& a);
	Point operator+(const Point& a);
	Point operator-(const Point& a);
	double operator/(const Point& a);
	bool operator>(const Point& a);
	bool operator<(const Point& a);
	const double& dot(const Point& p)const;

	
	


	
};

	


