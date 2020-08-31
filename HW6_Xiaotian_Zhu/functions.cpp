#include<iostream>
using namespace std;
void MaxMin(int const* arr, const int& n, int& max, int& min, int& maxIndx, int& minIndx) {
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndx = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndx = i;
		}
	}
	
}
void MaxMin(double const* arr, const int& n, double& max, double& min, int& maxIndx, int& minIndx) {
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndx = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndx = i;
		}
	}
	
}
void generateReturns(double const* prices, const int& n, double* returns) {
	for (int i = 0; i < n-1 ; i++) {
		returns[i  ] = (prices[i + 1] - prices[i]) / prices[i];
	}
}
void calcAnnualizedStats(double const* returns, const int& n, const char& seriesType, double& avgRet, double& retStd) {
	/*cout << "type is " << seriesType << seriesType<<endl;*/
	double avg=0, sum=0,var,sum1=0;
	if (seriesType == 'd') {
		for (int i = 0; i < n; i++) {
			sum += returns[i];
		}
		/*cout << "sum is" << sum;*/
		avg = sum / n; // now we have the average
		for (int i = 0; i < n; i++) {
			sum1 += pow((returns[i] - avg), 2);
		}
		var = sum1 / n;//now we have the variance
		retStd = sqrt(var);
		/*cout << "avg is" << avg;*/
		avgRet = pow(1 + avg, 252) - 1;

	}
	else if (seriesType == 'm') {
		for (int i = 0; i < n; i++) {
			sum += returns[i];
		}
		avg = sum / n;
		for (int i = 0; i < n; i++) {
			sum1 += pow((returns[i] - avg), 2);
		}
		var = sum1 / n;//now we have the variance
		retStd = sqrt(var);
		avgRet = pow(1 + avg, 12) - 1;
	}
	else if (seriesType == 'q') {
		for (int i = 0; i < n; i++) {
			sum += returns[i];
		}
		avg = sum / n;
		for (int i = 0; i < n; i++) {
			sum1 += pow((returns[i] - avg), 2);
		}
		var = sum1 / n;//now we have the variance
		retStd = sqrt(var);
		avgRet = pow(1 + *returns, 4) - 1;
	}
	
	cout << "the average return is " << avgRet << endl;
	cout << "the volatility is " << retStd << endl;
}
