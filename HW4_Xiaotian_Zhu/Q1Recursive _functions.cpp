#include<iostream>
#include<cmath>
using namespace std;
int sum_of_digits(int number) {
	int b = abs(number);
	if (b / 10 == 0)
		return b;
	return b % 10 + sum_of_digits(b / 10);
		 
	
}
double golden_mean_ratio(int n) {
	if (n < 1) {
		cout << "please enter a positive integer" << endl;
		return 0;
	}
	else if (n == 1)
		return 0.5;		
	else
		return 1 / (1 + golden_mean_ratio(n-1));

	}
	

