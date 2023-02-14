// Polynomial.cpp
// Prog10.cpp
// Jacob Branson
// COSC 1030 
// Program 10
//1 Apr. 2022

#include "Polynomial.hpp"
#include<iostream>
using std::ostream;
using std::istream;
#include<vector>
using std::vector;

#include "Polynomial.hpp"

Polynomial::Polynomial() {
    this->degree = -1;
}

Polynomial::Polynomial(int deg, const vector<double> coefficients) {
    this->degree = deg;
    this->coeffs = coefficients;
}

Polynomial::Polynomial(const Polynomial& poly2) {
    this->degree = poly2.degree;
    this->coeffs = poly2.coeffs;
}

Polynomial::~Polynomial() {
    this->coeffs.clear();
}

const Polynomial& Polynomial::operator=(const Polynomial& poly2) {
    this->degree = poly2.degree;
    this->coeffs.clear();
    this->coeffs = poly2.coeffs;
    return *this;
}

bool Polynomial::operator==(const Polynomial& poly2) const {
    if ((poly2.degree == this->degree) and (this->coeffs == poly2.coeffs)) return true;
    else return false;
}

double Polynomial::operator[](int index) const {
    return this->coeffs[index];
}

double& Polynomial::operator[](int index) {
    return this->coeffs[index];
}

int Polynomial::getDegree() const {
    return this->degree;
}

ostream& operator<<(ostream& out, const Polynomial& poly) {
    if (poly.degree == -1) out << "empty";
    for (int i = poly.degree; i >= 0; i--) {
        if ((i == 0) and (poly.coeffs[i] >= 0)) out << "+" << poly.coeffs[i];
        else if (i == 0) out << poly.coeffs[i];
        else if (poly.coeffs[i] >= 0) out << "+" << poly.coeffs[i] << "x^(" << i << ") ";
        else out << poly.coeffs[i] << "x^(" << i << ") ";
    }
    return out;
}

istream& operator>>(istream& in, Polynomial& poly) {
    int deg;
    in >> deg;
    poly.degree = deg;
    poly.coeffs = vector<double>(deg + 1);
    double coeff;
    for (int i = poly.degree; i >= 0; i--) {
        in >> coeff;
        poly.coeffs[i] = coeff;
    }
    return in;
}