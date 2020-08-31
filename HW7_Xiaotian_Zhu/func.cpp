#include<iostream>
using namespace std;
double* MatVecMult(double** mat, int n1, int n2, double const* vec, int k) {
	if (n2 == k) {
		double *result = new double[n1]();

		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < n2; j++) {
				result[i] += mat[i][j] * vec[j];
				/*cout << "ok" << endl;*/
			}
		}
		/*for (int i = 0; i < n1; i++) {
			cout << result[i] << " ";
		}*/
		return result;
	}
	else {
		cout << "their product doesn't exist" << endl;
		return nullptr;
	}

}
double det(double** mat, int n) {
	int row = n;
	int column = 2*n;//creat a n*2n  dynamic matrix to put n*n+n*n in;
	double** matPlus = new double*[row];
	for (int i = 0; i < row; i++) {
		matPlus[i] = new double[column];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matPlus[i][j] = mat[i][j];
			matPlus[i][j + n] = mat[i][j];
			/*cout << matPlus[i][j+n] << endl;*/
		}
	}
	double determinant = 0;
	//create two 1-dimension dynamic array to put positive&negative part when calculate the determinant;
	double* result_positive = new double[n] ;
	double* result_negative = new double[n] ;
	//initialize every value as 1;
	for (int i = 0; i < n; i++) {
		result_positive[i] = 1;
		result_negative[i] = 1;
	}
	
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			result_positive[j] *= matPlus[i][i+j];
			result_negative[j] *= matPlus[n - i - 1][i + j];
			/*determinant +=result_positive[j]+result_negative[j];*/
		}
		determinant += result_positive[j] - result_negative[j];
	}
	/*for (int i = 0; i < n; i++) {
		cout << result_positive[i] << endl;
	}*/
	return determinant;

}

bool MatrixMult(double** mat1, int row1, int col1, double** mat2, int row2, int col2, double** prod) {
	if (col1 == row2) {
		/*int num = row1 * col2;*/
		/*double* result = new double[row1 * col2];*/
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col2; j++) {
				for (int k = 0; k < col1; k++) {

					prod[i][j] += mat1[i][k] * mat2[k][j];
				}
			}
		}
		/*cout << "prod is";
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col2; j++) {
				cout << prod[i][j]<<" ";
			}
			cout << endl<<"       ";
		}*/
		cout << endl;
		return true;
	}
	else {
		return false;
	}
}
