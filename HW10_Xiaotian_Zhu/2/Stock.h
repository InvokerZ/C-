#include<iostream>
using namespace std;
class Stock
{
private:
	 double* Prices ;
	int nPrices = 0;
	double* Returns ;
	double avgReturn;
	double returnVol;
public:
	friend ostream& operator<<(ostream& os, const Stock& p) {
		os << "the num of Price series is" << p.nPrices << "\n"
			<< "the average return is" <<p.avgReturn << endl
			<< "the volatility is" << p.returnVol << endl
			<< "the ratio of avgReturn/returnVol is" << p.avgReturn / p.returnVol << endl;
		return os;
	}
	Stock();
	Stock(const double* p, int n);
	//
	~Stock();
	//copy constructor
	Stock(const Stock& s);
	//copy assignment
	Stock& operator=(const Stock& s);
	//move constructor
	Stock(Stock&&);
	//move assignment operator
	Stock& operator = (Stock&& src);
	//setter
	void setPrices(const double* p, const int& n);
	//getter
	 int getNPrices()const;
	const double* getPrices()const;
	double* getReturns()const;
	double getAvgReturn()const;
	double getReturnVol()const;
	
	Stock operator-(const Stock& a);
	

	
};
Stock operator+(const Stock& a1, const Stock& a2);

