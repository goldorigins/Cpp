#pragma once
// Polynomial.hpp
// Prog10.cpp
// Jacob Branson
// COSC 1030 
// Program 10
//1 Apr. 2022
#ifndef _POLY_H

#define _POLY_H

#include <iostream>

using std::ostream;
using std::istream;

#include <vector>

using std::vector;

class Polynomial {
public:
	Polynomial();
	Polynomial(int deg, const vector<double> coefficients);
	Polynomial(const Polynomial&);
	~Polynomial();
	const Polynomial& operator=(const Polynomial&);
	bool operator==(const Polynomial&) const;
	double operator[](int index) const;
	double& operator[](int index);
	int getDegree() const;
	friend ostream& operator<<(ostream&, const Polynomial&);
	friend istream& operator>>(istream&, Polynomial&);
private:
	vector<double> coeffs;
	int degree;
};

// Beware! Very incomplete!

ostream& operator<<(ostream&, const Polynomial&);

istream& operator>>(istream&, Polynomial&);

#endif