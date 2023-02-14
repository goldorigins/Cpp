/*
Prog05.cpp
Jacob Branson
COSC 1030, Section 01
Prog 05
15 Feb 2022

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setprecision;


int get_limit(void);
double calculation(int limit);
void output_text(double pi);

int main() {
	int limit;
	double pi;
	limit = get_limit();
	pi = calculation(limit);
	output_text(pi);
	return 0;
}

int get_limit() {
	int tmp;
	cout << "This program estimates the value of PI based on the Madhava-Leibniz series." << endl;
	cout << endl;
	cout << "###########################################################################" << endl;
	cout << endl;
	do {
		cout << "Enter max value of k in truncated series (non-neg. int): ";
		cin >> tmp;
	} while (tmp<0);
	int limit = tmp;
	return limit;
}

double calculation(int limit) {
	double pi;
	int numerator = -1;
	double sum = 0;
	double div;
	double denomenator;

	for (int k = 0; k <= limit; k++) {
		numerator *= -1;
		denomenator = (2 * k + 1);
		div = numerator / denomenator;
		sum += div;
	}

	pi = sum * 4;
	return pi;
}

void output_text(double pi) {
	cout.precision(16);
	cout << "Approximation of pi is: " << pi << endl;
	return;
}