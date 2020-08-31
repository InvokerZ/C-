#include "Timeseries.h"
#include<iostream>
using namespace std;
Timeseries:: ~Timeseries() {
	if (pSeries != nullptr)
		delete [] pSeries;
	
}
void Timeseries::setSeries(const double* p, int n)
{
	seriesLen = n;
	pSeries = new double[n];
	for (int i = 0; i < n; ++i)
		pSeries[i] = p[i];

}
const int&Timeseries:: getSeriesLen()const {
	return seriesLen;
}
void Timeseries:: getSeries()const{
	for (int i = 0; i < seriesLen; i++) {
		std::cout << pSeries[i] << " ";
	}
}
void Timeseries::calcAvgReturnVol() {
	double* Return = new double[seriesLen - 1];
	double sum = 0;
	for (int i = 0; i < seriesLen - 1; i++) {
		Return[i] = (pSeries[i + 1] - pSeries[i]) / pSeries[i];
		sum += Return[i];
	}
	
	double avg = sum / (seriesLen - 1);
	cout << "the average return is " <<avg << endl;
	double temp = 0;
	for (int i = 0; i < seriesLen-1; i++) {
		temp += (Return[i] - avg) * (Return[i] - avg);
	}
	double variance = temp / (seriesLen-1);
	double volatility = pow(variance, 0.5);
	cout << "the volatility is " << volatility << endl;
	delete Return;
}
void Timeseries::findMaxMin() {
	double Max = pSeries[0];
	double Min = pSeries[0];
	int maxIndex=0, minIndex=0;
	for (int i =0; i < seriesLen; i++) {
		
			if (pSeries[i] > Max) {
				Max = pSeries[i];
				maxIndex = i;
			}
			if (pSeries[i] < Min) {
				Min = pSeries[i];
				minIndex = i;
			}
	}
	cout << "the max value is " << Max << " and its index is " << maxIndex << endl;
	cout << "the min value is " << Min << " and its index is " << minIndex << endl;
}


