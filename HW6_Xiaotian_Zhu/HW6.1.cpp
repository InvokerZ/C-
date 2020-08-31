// HW6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
#include"Header.h"
using namespace std;

int main()
{

	char c[10000];
	int num = 0;
	
	ifstream infile1("SPY1993to2019.txt");
	if (!infile1) {
		cout << "failed" << endl;
		exit(1);
	}
	else {
		
		while (infile1 >> c) {
			
				num++;
			
		}
		num = num / 7;
		
	}

	
	//while (!infile.eof()) {
	//	getline(infile, line);
	//	num++;
	//}
	int datanum = num - 1 ;
	cout << "this file has" << datanum << "lines" << endl;
	infile1.close();
	ifstream infile2("SPY1993to2019.txt");
	string head[7] = {};
	string* date = new string[datanum];
	double* open = new double[datanum];
	double* high = new double[datanum];
	double* low = new double[datanum];
	double* close = new double[datanum];
	double* adjclose = new double[datanum];
	double* volume = new double[datanum];
	
	for (int i = 0; i < 7; i++) {
		infile2 >> head[i];
	}
	for (int i = 0; i < datanum; i++) {
		infile2 >> date[i] >> open[i] >> high[i] >> low[i] >> close[i] >> adjclose[i] >> volume[i];
	}
	/*for (int i = 0; i < 7; i++) {
		cout << head[i] << endl;
	}*/
	infile2.close();
	double max, min;
	int maxIndx, minIndx;

	ofstream outfile("answer.txt");
	 MaxMin(adjclose, datanum,  max,  min,  maxIndx,  minIndx);
	 
	 outfile << "the max number is in row " << maxIndx+2 << " ,which is " << max<<" and the max's date is " << date[maxIndx] << endl;
	 outfile<< "the min number is in row " << minIndx+2 << " ,which is " << min << " and the min's date is " << date[minIndx] << endl;

	 double avgRet, retStd;
	 char seriesType='d';
	 double* returns = new double[datanum];
	 generateReturns(adjclose, datanum, returns);

	 
	/* for (int i = 0; i < datanum - 1; i++) {
		 cout << returns[i] << endl;
	 }*/
	 calcAnnualizedStats(returns, datanum-1, seriesType, avgRet, retStd);
	 outfile << "the annualized averaged return is " << avgRet << " and the annualized averaged return volatility is " << retStd<<endl;
	 MaxMin(volume, datanum, max, min, maxIndx, minIndx);
	 outfile << "the max trading volume day is in row" << maxIndx + 2 << " ,which is " << max << " and the max's date is " << date[maxIndx] << endl;
	 outfile << "the min trading volume day is in row " << minIndx + 2 << " ,which is " << min << " and the min's date is " << date[minIndx] << endl;
	 outfile.close();
	 //delete memory
	 delete []date;
	 delete[]open;
	 delete[]high;
	 delete[]low;
	 delete[]close;
	 delete[]adjclose;
	 delete[]volume;
	 delete[]returns;
	
	 


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
