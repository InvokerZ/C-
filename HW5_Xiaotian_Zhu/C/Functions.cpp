#include<cmath>
using namespace std;
#define PI 3.1415
#include<iostream>




double newton_raphson(double x0, int f, double prec) {
	double arr[8] = {};
	double function, defunc;
	double a = x0;
	int i = 0;
	int j = 0;
	switch (f) {
	case 1:
		for (i = 0; i < 7; i++) {
			function= 4 * a * a - 8 * a - 5;
			defunc = 8 * a - 8;
			a = a - function / defunc;
			arr[i] = a;
		}
		for (j = 0; j < 7; j++) {
			switch (abs(arr[j + 1] - arr[j]) < prec) {
			case 1:
				cout << "the root is " << arr[j + 1] << endl;
				return 0;
			}
		}
		return 0;
	case 2:
		for (i = 0; i < 7; i++) {
			function = exp(-a * a) - a;
			defunc = -3 * a * a * exp(-pow(a, 3)) - 1;
			a = a - function / defunc;
			arr[i] = a;
		}
		for (j = 0; j < 7; j++) {
			switch (abs(arr[j + 1] - arr[j]) < prec) {
			case 1:
				cout << "the root is " << arr[j + 1] << endl;
				return 0;
			}
		}
		return 0;
	case 3:
		for (i = 0; i < 7; i++) {
			function = log(2 * a / PI) + sin(a);
			defunc = 1 / a + cos(a);
			a = a - function / defunc;
			arr[i] = a;
		}
		for (j = 0; j < 7; j++) {
			switch (abs(arr[j + 1] - arr[j]) < prec) {
			case 1:
				cout << "the root is " << arr[j + 1] << endl;
				return 0;
			}
		}
		return 0;
	}
}