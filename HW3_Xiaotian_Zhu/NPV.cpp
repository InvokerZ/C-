#include<iostream>
#include<cmath>
double gRiskfreeRate = 0;
void set_riskfree_rate(double r) {
	gRiskfreeRate = r;
}
double riskfree_NPV(double N, double T) {
	double NPV = N * exp(-gRiskfreeRate * T);
	return NPV;
}
double risky_NPV(double N, double T, double alpha) {
	double interest_rate = gRiskfreeRate + alpha;
	double npv= N * exp(-interest_rate * T);
	return npv;
}