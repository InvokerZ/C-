// HW5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include"Header.h"
using namespace std;
int main()
{
	//Q1
	ifstream infile;
	infile.open("dataVector");
	ofstream outfile("Vector.txt");
	if (!infile)
		cout << "failed" << endl;
	double arr[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			infile >> arr[i][j];
		}
	}
	
		double sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			 sum+= arr[i][j];

		}
		outfile << "sum of row"<< i+1<<" is" << sum << endl;
		cout << "sum of row" << i + 1 << " is" << sum << endl;
		
		sum = 0;
	}
	//Q2
	double arr1[4], arr2[4], arr3[4], arr4[4];//arr1 means 1st row vectors
	for (int i = 0; i < 4; i++) {
		
			arr1[i] = arr[0][i];
			arr2[i] = arr[1][i];
			arr3[i] = arr[2][i];
			arr4[i] = arr[3][i];
		
	}
	
	double length1 = lengthVector(arr1, 4);
	double length2 = lengthVector(arr2, 4);
	double length3 = lengthVector(arr3, 4);
	double length4 = lengthVector(arr4, 4);
	cout << "The length of row 1 is " << length1 << endl;
	cout << "The length of row 2 is " << length2 << endl;
	cout << "The length of row 3 is " << length3 << endl;
	cout << "The length of row 4 is " << length4 << endl;
	outfile << "The length of row 1 is " << length1 << endl;
	outfile << "The length of row 2 is " << length2 << endl;
	outfile << "The length of row 3 is " << length3 << endl;
	outfile << "The length of row 4 is " << length4 << endl;
	//Q3
	double angle = 0;
	outfile << "The angle and dot product of arr1 and arr2  is " << angle <<" and "  <<dotVectors(arr1,arr2,4,angle) << endl;
	outfile << "The angle and dot product of arr1 and arr3  is " << angle << " and " << dotVectors(arr1, arr3, 4, angle) << endl;
	outfile << "The angle and dot product of arr1 and arr4  is " << angle << " and " << dotVectors(arr1, arr4, 4, angle) << endl;
	outfile << "The angle and dot product of arr2 and arr3  is " << angle << " and " << dotVectors(arr2, arr3, 4, angle) << endl;
	outfile << "The angle and dot product of arr2 and arr4  is " << angle << " and " << dotVectors(arr2, arr4, 4, angle) << endl;
	outfile << "The angle and dot product of arr3 and arr4  is " << angle << " and " << dotVectors(arr3, arr4, 4, angle) << endl;
	cout << "The angle and dot product of arr1 and arr2  is " << angle << " and " << dotVectors(arr1, arr2, 4, angle) << endl;
	cout << "The angle and dot product of arr1 and arr3  is " << angle << " and " << dotVectors(arr1, arr3, 4, angle) << endl;
	cout << "The angle and dot product of arr1 and arr4  is " << angle << " and " << dotVectors(arr1, arr4, 4, angle) << endl;
	cout << "The angle and dot product of arr2 and arr3  is " << angle << " and " << dotVectors(arr2, arr3, 4, angle) << endl;
	cout << "The angle and dot product of arr2 and arr4  is " << angle << " and " << dotVectors(arr2, arr4, 4, angle) << endl;
	cout << "The angle and dot product of arr3 and arr4  is " << angle << " and " << dotVectors(arr3, arr4, 4, angle) << endl;
	infile.close();
	outfile.close();


	
	return 0;
}
// Run program:  + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
