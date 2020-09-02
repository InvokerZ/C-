// HW5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include"Header.h"
using namespace std;

int main()
{
	//Q1.1
	ifstream infile;
	infile.open("dataChar");
	ofstream outfile("output1");
	if (!infile) { cout << "fail" << endl; }
	else cout << "yes" << endl;
	char arr[19];
	for (int i = 0; i < 19; i++) {
		infile >> arr[i];
	}
	mySort(arr, 19);
	for (int i = 0; i < 19; i++) {
		outfile<< arr[i];
	}
	cout << endl;
	
	//Q1.2
	ifstream infile1;
	infile1.open("dataDouble");
	ofstream outfile1;
	outfile1.open("output2");
	if (!infile) { cout << "fail" << endl; }
	else cout << "yes" << endl;
	double arr1[53];
	for (int i = 0; i < 53; i++) {
		infile1 >> arr1[i];
	}
	mySort(arr1, 53);
	for (int i = 0; i < 53; i++) {
		outfile1 << arr1[i]<<" ";
	}
	cout << endl;
	//Q1.3
	ifstream infile2;
	infile2.open("dataString");
	ofstream outfile2;
	outfile2.open("output3");
	if (!infile) { cout << "fail" << endl; }
	else cout << "yes" << endl;
	string arr2[31];
	for (int i = 0; i < 31; i++) {
		infile2 >> arr2[i];
	}
	mySort(arr2, 31);
	for (int i = 0; i < 31; i++) {
		outfile2 << arr2[i]<<endl;
	}
	
	
	
	infile.close();
	infile1.close();
	infile2.close();
	outfile.close();
	outfile1.close();
	outfile2.close();

	
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
