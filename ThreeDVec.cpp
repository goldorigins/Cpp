// Prog13.cpp
// Jacob Branson
// COSC1030
// Program 13
//22 Apr. 2022

#include <iostream>
#include "ThreeDVec.hpp"

ThreeDVec::ThreeDVec() {
	x = y = z = 0;
}

ThreeDVec::ThreeDVec(float i, float m, float n) {
	x = i;
	y = m;
	z = n;
}

double ThreeDVec::mag() {
	double res = sqrt(x * x + y * y + z * z);
	return res;
}

ThreeDVec ThreeDVec::operator *(double k) {
	ThreeDVec temp(x * k, y * k, z * k);
	return temp;
}

double ThreeDVec::operator * (ThreeDVec t) {
	double res;
	res = x * t.x + y * t.y + z * t.z;
	return res;
}

ThreeDVec ThreeDVec::operator + (ThreeDVec t) {
	ThreeDVec res;
	res.x = x + t.x;
	res.y = y + t.y;
	res.z = z + t.z;
	return res;
}

ThreeDVec ThreeDVec::operator ^ (ThreeDVec t) {
	ThreeDVec res;
	res.x = y * t.z - z * t.y;
	res.y = z * t.x - x * t.z;
	res.z = x * t.y - y * t.x;
	return res;
}

void ThreeDVec::operator = (ThreeDVec t) {
	x = t.x;
	y = t.y;
	x = t.z;
}

istream& operator>> (istream& in, ThreeDVec& t) {
	in >> t.x;
	in >> t.y;
	in >> t.z;
	return in;
}

ostream& operator << (ostream& out, const ThreeDVec& t) {
	out << "("<<t.x<<"," << t.y <<"," << t.z << ")";

	return out;

}
