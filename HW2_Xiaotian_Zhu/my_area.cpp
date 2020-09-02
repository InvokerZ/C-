
#define pi 3.14159
#include<math.h>
using namespace std;

double area(double r) {                           //circle
	double a = pi * r * r;
	return a;
}

double area(int x,double r) {                            //sphere
	double a = 4 * pi * r * r;
	return a;
}

float area(int x,float e) {							         //cube
	float a = 6 * e * e;
	return a;
}
double area(double w, double l) {								//rectangle
	double a = w * l;
	return a;
}
double area(double l1,double l2,double angle) {								//triangle
	double a =0.5*l1*l2*sin(angle*pi/180);
	return a;
}
