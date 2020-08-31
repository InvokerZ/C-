// HW7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Header.h"
#include<fstream>
using namespace std;
int main()
{
	//Question A
	int n1=2, n2=3;
	double** mat = new double * [n1];
	for (int i = 0; i < n1; i++) {
		mat[i] = new double[n2];
	}
	double m[2][3] = { -1,4.5,6.2,2,-3.4,-2 };
	double v1[2] = { 7,-1.2 };
	double v2[3] = { 1,2,1.5 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			mat[i][j] = m[i][j];
		}
	}
	ofstream outfile("output1.txt");

	 double* result=MatVecMult(mat,  2,  3, v2,  3);
	 for (int i = 0; i < 2; i++) {
		 outfile << result[i]<<" ";
	 }
	 outfile.close();
	 for (int i = 0; i < n1; i++) {
		 delete[] mat[i];
	 }
	 delete[]mat;
	 //Question B
	 int n3 = 3;
	 double** mat1 = new double* [n3];
	 for (int i = 0; i < n3; i++) {
		 mat1[i] = new double[n3];
	 }
	 double m2[3][3] = { 2,-3,1,2,0,-1,1,4,5 };
	 for (int i = 0; i < 3; i++) {
		 for (int j = 0; j < 3; j++) {
			 mat1[i][j] = m2[i][j];
			/* cout << mat1[i][j];*/
		 }
	 }
	 double q2;
	 q2 = det(mat1, 3);
	 ofstream outfile2("outfile2.txt");
	 outfile2 << q2;
	 outfile2.close();
	 for (int i = 0; i < n3; i++) {
		 delete[] mat1[i];
	 }
	 delete[]mat1;

	 //Question C
	 int r = 2;
	 int c = 3;
	 double** prod = new double* [r];
	 for (int i = 0; i < r; i++) {
		 prod[i] = new double[c];
	 }
	 //initialize every item in prod[] as 0
	 for (int i = 0; i < r; i++) {
		 for (int j = 0; j < c; j++) {
			 prod[i][j] = 0;
		 }
	 }
	 int r1 = 2;
	 int c1 = 3;
	 double** mat2 = new double* [r1]; //mat2 is used to store the first matrix
	 for (int i = 0; i < r1; i++) {
		 mat2[i] = new double[c1];
	 }
	 double m1[2][3] = { -1,4.5,6.2,2,-3.4,-2 };
	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 3; j++) {
			 mat2[i][j] = m1[i][j];
		 }
	 }
	 int r2 = 3;
	 int c2 = 3;
	 double** mat3 = new double* [r2];// mat3 is used to store the second matrix
	 for (int i = 0; i < r2; i++) {
		 mat3[i] = new double[c2];
	 }
	 double m4[3][3] = { 2,-3,1,2,0,-1,1,4,5 };
	 for (int i = 0; i < 3; i++) {
		 for (int j = 0; j < 3; j++) {
			 mat3[i][j] = m4[i][j];
		 }
	 }
	 bool b1, b2;
	b1= MatrixMult(mat3, 3, 3, mat2, 2, 3, prod);
	cout << "b1 is " << b1 << endl;
	 b2= MatrixMult( mat2, 2, 3, mat3, 3, 3, prod);
	 cout << "b2 is " << b2 << endl;

	 ofstream outfile3("outfile3.txt");

	 cout << "prod is ";
	 outfile3 << "prod is ";
	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 3; j++) {
			 cout << prod[i][j] << " ";
			 outfile3 << prod[i][j]<<" ";
		 }
		 outfile3 << endl<<"       ";
		 cout << endl << "       ";
	 }
	 outfile3 << endl;
	 outfile3 << "the boolean result of m1*m2 is" << b1 << endl;
	 outfile3 << "the boolean result of m2*m1 is" << b2 << endl;
	 outfile3.close();
	 for (int i = 0; i < r; i++) {
		 delete[] prod[i];
	 }
	 delete[]prod;
	 for (int i = 0; i < r1; i++) {
		 delete[] mat2[i];
	 }
	 delete[]mat2;
	 for (int i = 0; i < r2; i++) {
		 delete[] mat3[i];
	 }
	 delete[]mat3;


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
