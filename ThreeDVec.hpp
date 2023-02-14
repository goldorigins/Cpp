#pragma once
// Prog13.cpp
// Jacob Branson
// COSC1030
// Program 13
//22 Apr. 2022

#ifndef THREE_D_VEC_INCLUDED
#define THREE_D_VEC_INCLUDED
#include <iostream>
using std::ostream;
using std::istream;

class ThreeDVec {
	float x;
	float y;
	float z;

public:
	ThreeDVec();
	ThreeDVec(float i, float m, float n);

	friend ostream& operator << (ostream& out, const ThreeDVec& t);
	friend istream& operator >> (istream& in, ThreeDVec& t);

	ThreeDVec operator + (ThreeDVec t);
	ThreeDVec operator ^ (ThreeDVec t);
	double operator * (ThreeDVec t);
	double mag();
	ThreeDVec operator * (double k);

	void operator = (ThreeDVec t);


};
#endif
