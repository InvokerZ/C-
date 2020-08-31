// HW8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"header.h"
using namespace std;
double fun1(double x) { return exp(x) - x * x; }
double fun2(double x) { return -2 * x - log(x); }
double fun3(double x) { return pow(cos(x), 2) + x; }
double fun1deri(double x) { return exp(x) - 2 * x; }
double fun2deri(double x) { return -2 - 1 / x; }
double fun3deri(double x) { return -2 * cos(x) * sin(x) + 1; }
double multfun1(double x, double y) {
	return x * x + y * y + 6 * x * x * y * y;
}
double multfun2(double x, double y) {
	return x *y *(x-y);
}

int main(){
	//Q1
	double r1=NewtonRaphson(fun1, fun1deri, 2.5, 0.001);
	cout <<"the root of fun1 is"<< r1<<endl;
	double r2= NewtonRaphson(fun2, fun2deri, 0.5, 0.01);
	cout << "the root of fun2 is" << r2<<endl;
	double r3 = NewtonRaphson(fun3, fun3deri, -1.7, 0.01);
	cout << "the root of fun3 is" << r3<<endl;
	//Q2
	    
	Hessian(multfun1,0,0);
	cout << endl;
	Hessian(multfun1, 1, 1);
	cout << endl;
	Hessian(multfun2, 0, 0);
	cout << endl;
	Hessian(multfun2, 1, 1);

	return 0;

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
