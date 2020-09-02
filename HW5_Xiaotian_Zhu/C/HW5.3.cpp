// HW5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Header.h"
using namespace std;
int main()
{

	int i = 1;
	while (i=1) {
		cout << "Please choose a function(1,2,3)" << endl;
		int num = 0;
		cin >> num;
		switch (num) {

		case 1:cout << "Please provide a guess" << endl;
			double x1;
			cin >> x1;
			newton_raphson(x1, 1, 0.0001);

			break;
		case 2:cout << "Please provide a guess" << endl;
			double x2;
			cin >> x2;
			newton_raphson(x2, 2, 0.0001);

			break;
		case 3:cout << "Please provide a guess" << endl;
			double x3;
			cin >> x3;
			newton_raphson(x3, 3, 0.0001);
			break;

		default:i = 0;
		}
	}
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
