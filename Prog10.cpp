// Prog10.cpp
// Jacob Branson
// COSC 1030 
// Program 10
//1 Apr. 2022
#include <iostream>

using std::cout;

using std::endl;

using std::cin;

#include "Polynomial.hpp"

int main() {

	Polynomial A;
	cout << "(1) Testing `cout << A': " << A << endl;
	cout << "(2) Testing `cin >> A':\n";
	cout << "Enter the polynomial (integer order then double coefficients):\n\t ";
	cin >> A;
	cout << endl;
	cout << "(3) Second look at A: " << A << endl;

	Polynomial B(A);
	cout << "(4) Testing `Polynomial B(A)': " << B << endl;
	vector<double> clist;
	clist.push_back(8);
	clist.push_back(4.5);
	clist.push_back(1);

	Polynomial C(2, clist);
	cout << "(5) Testing `Polynomial C(2, clist)': " << C << endl;

	Polynomial D = C;
	cout << "(6) Testing D = C): " << D << endl;
	cout << "(7) Testing A == B : " << (A == B ? "TRUE" : "FALSE") << endl;
	cout << "(8) Testing A == D : " << (A == D ? "TRUE" : "FALSE") << endl;

	Polynomial E;
	E = C;
	cout << "(9) Testing E == C : " << (E == C ? "TRUE" : "FALSE") << endl;
	cout << "(10) Testing E get degree function : " << E.getDegree() << endl;
	cout << "(11) Testing E [get degree] : " << E[E.getDegree()] << endl;
	E[0] = 2.91;
	cout << "(12) Testing changing of coeffs of E to 2.91 : " << E << endl;

	return 0;

}