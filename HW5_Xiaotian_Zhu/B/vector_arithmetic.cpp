#include<iostream>
#include<math.h>
using namespace std;
void addVectors(double arr1[], double arr2[], double arr3[], int n) {
	for (int i = 0; i < n; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}
}
double lengthVector(double arr[], int n) {
	double sum = 0;
	double len = 0;
	for (int i = 0; i < n; i++) {
		 sum= sum+arr[i] * arr[i];
		
		
	}
	len = sqrt(sum);
	return len;
};
double dotVectors(double arr1[], double arr2[], int n, double& angle) {
	double dot=0;
	for (int i = 0; i < n; i++) {
		 dot = dot+arr1[i] * arr2[i];
		
	}
	angle = (acos(dot / (lengthVector(arr1, 4) * lengthVector(arr2, 4)))) * (180 / 3.1415);
	return dot;
}
