#include "Stock.h"
#include<cmath>
#include<iostream>
using namespace std;
Stock::Stock() {
	cout << "default constructor is called" << endl;
}
Stock::~Stock() {
	if (Prices != nullptr)
		delete[] Prices;
	cout << "destructor is called" << endl;
}
Stock::Stock(const double* p, int n) {
	nPrices = n; 
	Prices = new double[n];
	for (int i = 0; i < n; i++) {
		Prices[i] = p[i];
	}
	
	Returns = new double[n - 1];

	for (int i = 0; i < n - 1; i++) {
		Returns[i] =  Prices[i + 1] / Prices[i]-1;
	}
	double sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += Returns[i];
	}
	avgReturn = sum / (n - 1);
	double sum1 = 0;
	for (int i = 0; i < n - 1; i++) {
		sum1 += pow(Returns[i] - avgReturn, 2);
	}
	double vol = pow(sum1/(n-1), 0.5);
	returnVol = vol;
	cout << "overloaded constructor is called" << endl;
}
Stock::Stock(const Stock& s) {
	nPrices = s.nPrices;
	avgReturn = s.avgReturn;
	returnVol = s.returnVol;
	Prices = new double;
	*Prices = *(s.Prices);
	Returns = new double;
	*Returns = *(s.Returns);
	cout << "copy constructor is called" << endl;
}
Stock& Stock::operator=(const Stock& s) {
	if (&s != this) {
		nPrices = s.nPrices;
		avgReturn = s.avgReturn;
		returnVol = s.returnVol;
		double* p = new double;
		*p = *(s.Prices);
		double* r = new double;
		*r = *(s.Returns);
	}
	cout << "copy assignment operator is called" << endl;
	return *this;
}
Stock::Stock(Stock&& src) :Prices{ src.Prices }, nPrices{ src.nPrices }, avgReturn{ src.avgReturn }, returnVol{ src.returnVol }, Returns{ src.Returns }
{
	src.Prices = nullptr;
	src.Returns = nullptr;
	cout << "move constructor is called" << endl;
}
Stock& Stock ::operator=(Stock&& src) {
	if (this != &src) {
		nPrices = src.nPrices;
		avgReturn = src.avgReturn;
		returnVol = src.returnVol;
		delete[] Prices;
		Prices = src.Prices;
		src.Prices = nullptr;
		delete[] Returns;
		Returns = src.Returns;
		src.Returns = nullptr;

	}
	cout << "move assignment operator is called" << endl;
	return *this;
}
void Stock:: setPrices(const double* p, const int& n) {
	nPrices = n;
	Prices = new double[n];
	for (int i = 0; i < n; i++) {
		Prices[i] = p[i];
	}
	for (int i = 0; i < n - 1; i++) {
		Returns[i] = Prices[i + 1] / Prices[i] - 1;
	}
	double sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += Returns[i];
	}
	avgReturn = sum / (n - 1);
	double sum1 = 0;
	for (int i = 0; i < n - 1; i++) {
		sum1 += pow(Returns[i] - avgReturn, 2);
	}
	double vol = pow(sum1 / (n - 1), 0.5);
	returnVol = vol;
}
 int Stock::getNPrices()const {
	return nPrices;
}
const double* Stock::getPrices()const {
	return Prices;
}
double* Stock::getReturns()const {
	return Returns;
}
double Stock::getAvgReturn()const {
	return avgReturn;
}
double Stock::getReturnVol()const {
	return returnVol;
}
//ostream& operator<<(ostream& os,  const Stock& s) {
//	os << "the num of Price series is" << s. << endl
//		<< "the average return is" << p.getAvgReturn() << endl
//		<< "the volatility is" << p.getReturnVol() << endl
//		<< "the ratio of avgReturn/returnVol is" << p.getAvgReturn() / p.getReturnVol() << endl;
//	return os;
//}
Stock operator+(const Stock& a1, const Stock& a2) {
	int length = 0;
	
	length = (a1.getNPrices() < a2.getNPrices() )? a1.getNPrices() : a2.getNPrices();
	double* arr = new double[length];
	for (int i = 0; i < length; i++) {
		arr[i] = a1.getPrices()[i]+a2.getPrices()[i] ;
	}
	Stock p(arr, length);
	return p;
}
Stock Stock::operator-(const Stock& a) {
	Stock p;
	p.avgReturn = this->avgReturn - a.avgReturn;
	p.returnVol = this->returnVol - a.returnVol;
	return p;
}
