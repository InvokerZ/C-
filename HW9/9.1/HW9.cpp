// HW9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;
#include"Point.h"
int main()
{
	int i = 0;
	double a, b ;
	cout << "please initialize a point as A" << endl;
	cin >> a;cin>> b;
	Point point(a, b);
	Point pointarr[5];
		cout << "please input corrdinates x and y 5 times" << endl;
		double m, n;
	while (i < 5) {
		
		cin >> m; cin >> n;
		pointarr[i].setX(m);
		pointarr[i].setY(n);
		i++;
	}
	ofstream outfile;
	outfile.open("outfile.txt");
	
	for (int i = 0; i < 5; i++) {
		/*double result[i]=distance_of_*/
		outfile << "Distance from (" << pointarr[i].getX() << "," << pointarr[i].getY() << ") to (" << point.getX() << ","<<point.getY() << ") is " << point.distance_to_point(pointarr[i]) << endl;
	}
	
	outfile.close();
	/*pointarr->~Point();*/
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
