// HW4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"HW4.h"
#include <iostream>
using namespace std;


int main()
{
	//Q1:
	int q1;
	cout << "Please input an integer" << endl;
	cin >> q1;
	int a= sum_of_digits(q1);
	cout << "sum of digits is " << a << endl;
	//Q2:
	int q2;
	cout << "Please input the level" << endl;
	cin >> q2;
	double b = golden_mean_ratio(q2);
	cout <<"golden mean ratio is "<< b << endl;
	//Q3:
	game();
	cout << "please input the number of rings" << endl;
	int n;
	cin >> n;
	move_rings(n, 'A' ,'B','C');

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
