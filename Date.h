// date.h
// Jacob Branson
// COSC 1030
// Lab 09
//23 Mar. 2022
// Exercise the Time and date class
#pragma once
#ifndef DATE_H
#define DATE_H

#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setfill;
using std::setw;

class Date
{
public:

	Date(int day = 0, int month = 0, int year = 0);
	void setdate(int day, int month, int year);
	void setday(int day);
	void setmonth(int month);
	void setyear(int year);
	int getday();
	int getmonth();
	int getyear();
	void printmil();
	void printus();
private:
	int day1; 
	int month1;
	int year1;
};
#endif