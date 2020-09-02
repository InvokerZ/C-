#include<iostream>
using namespace std;
#include<string.h>

void myswap( char &a,char &b) {
	if (a > b) {
	
		char temp = a;
		a = b;
		b = temp;

	}
	
}
void myswap(double &a, double  &b) {
	if (a > b) {
		
		double temp = a;
		a = b;
		b = temp;
	}
}
void myswap(string &a, string  &b) {
	if (a > b) {
		
		string temp = a;
		a = b;
		b = temp;
	}
	
}
void mySort(char arr[], int size_of_array) {
	
	for (int i = 0; i < size_of_array - 1; i++) {
		for (int j = 0; j < size_of_array - i - 1; j++) {
			char m = arr[j]; char n = arr[j + 1];
			myswap(m,n);
			arr[j] = m; arr[j + 1] = n;
		}
	}
	for (int n = 0; n < size_of_array ; n++) {
		cout << arr[n] << " ";
	}
}
void mySort(double arr[], int size_of_array) {
	for (int i = 0; i < size_of_array - 1; i++) {
		for (int j = 0; j < size_of_array - i - 1; j++) {
			double m = arr[j];  double n = arr[j + 1];
			myswap(m, n);
			arr[j] = m; arr[j + 1] = n;
		}
	}
	for (int n = 0; n < size_of_array; n++) {
		cout << arr[n] << " ";
	}
}
void mySort(string arr[], int size_of_array) {
	for (int i = 0; i < size_of_array - 1; i++) {
		for (int j = 0; j < size_of_array - i - 1; j++) {
			string a = arr[j];
			string b = arr[j + 1];
			
			myswap(a, b);
			
			arr[j] = a; arr[j + 1] = b;
		}
	}
	for (int n = 0; n < size_of_array; n++) {
		cout << arr[n] << " ";
	}
}
