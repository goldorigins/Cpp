// Params.cpp
// COSC 1030
// Jacob Branson
// Program 9
// 25 Mar. 2022
#include <iostream>
using std::cout;
using std::endl;
int n = 0;
double m = 0;
double b = 0;
double sumX2 = 0;
double sumY = 0;
double sumX = 0;
double sumXY = 0;
void LLParams(const double x[], const double y[], int n, double& m, double& b, int arraySize) {
	for (int i = 0; i < arraySize;i++) {//sum of  sum(x,y)
		double result = (x[i] * y[i]);
		sumXY+= result;
	}
	for (int i = 0; i < arraySize; i++) {//sum of x
		double result1 = ( x[i] );
		sumX += result1;
	}
	for (int i = 0; i < arraySize; i++) {//sum of y
		double result2 = ( y[i] );
		sumY += result2;
	}
	for (int i = 0; i < arraySize; i++) {//sum of  sum(x^2)
		double result3 = (x[i] * x[i]);
		sumX2 += result3;
	}
	n = arraySize;
	m = (n * sumXY- sumX * sumY) / (n * sumX2 - sumX * sumX);
	b = (sumY - m * sumX) / n;
}