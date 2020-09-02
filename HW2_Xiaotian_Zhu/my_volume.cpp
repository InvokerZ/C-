#include<iostream>
#define pi 3.14
#include<math.h>
double area(double r);
double volume(double r) {                             //sphere
	double a = 4 * pi * pow(r, 3) / 3;
	return a;
}
double volume(int x,double l) {                             //cube
	double a = pow(l, 3);
	return a;
}

double volume(double r,double h) {                             //cylinder
	double a = area(r);
	double b = a*h;
	return b;
}
double volume(double w, double l, double h) {                    //prism
	double a = w * l * h;
	return a;
}