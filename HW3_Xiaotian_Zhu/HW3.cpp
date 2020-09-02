// HW3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"NPV.h"
using namespace std;
int main()
{
    set_riskfree_rate(0.035);
	
	double a=riskfree_NPV(1000,1.5);
	cout <<"the riskfree NPV of a cash payment of $1000 in 1.5 year of time is "<< a << endl;
	double b = risky_NPV(1000, 1.0, 0.15);
	cout << "the risky NPV of a cash payment of $1000 from a CCC rated company in 1 year of time is "<<b << endl;
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
