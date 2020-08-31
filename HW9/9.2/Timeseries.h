#pragma once
class Timeseries
{
private:
	int seriesLen;
	 double* pSeries;
public:
	//constructor
	Timeseries() { seriesLen = 0; pSeries =nullptr; }
	Timeseries( double* p, int n) { seriesLen = n; pSeries = p; }
	//destructor
	~Timeseries();
	//setter
	void setSeries(const double* p, int n) ;
	//getter
	const int &getSeriesLen()const;
	 void getSeries()const;
	//interface
	void calcAvgReturnVol();
	void findMaxMin();
};

