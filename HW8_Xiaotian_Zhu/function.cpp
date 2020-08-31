#include<math.h>
#include<iostream>
//double fun1(double x) { return exp(x) - x * x; }
//double fun2(double x) { return -2*x - log(x); }
//double fun1(double x) { return pow(cos(x),2) +x; }
//double fun1deri(double x) { return exp(x) - 2 * x; }
//double fun2deri(double x) { return -2 - 1 / x; }
//double fun3deri(double x) { return -2 * cos(x) * sin(x) + 1; }
using Funcptr = double(*)(double);
using Func_deri_ptr = double(*)(double);
using namespace std;
double NewtonRaphson(Funcptr F, Func_deri_ptr f, double guess, double error) {
	/*int count = 0;*/
	double difference = 0;
	double next = 0;

	do {
		
		 next = guess - F(guess) / f(guess);
		 difference=next-guess;
		
		guess = next;
		
	} while (fabs(difference) >error);
	
		return next;
}
using FuncMultPtr = double(*)(double, double);
//using FuncMultDeriPtr = double(*)(double, double);
void Hessian(FuncMultPtr F, double x, double y) {
	double i = 0.000001;
	double arr[2][2];
	arr[0][0] = (F(x + i, y) + F(x - i, y) - 2 * F(x, y)) / pow(i, 2);
	arr[0][1] = (F(x + i, y + i) + F(x - i, y - i) - F(x + i, y - i) - F(x -i,y+i)) / (4*pow(i, 2));
	arr[1][0] = arr[0][1];
	arr[1][1]= (F(x, y + i) + F(x, y - i) - 2 * F(x, y)) / pow(i, 2);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}