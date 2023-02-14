// Date.cpp
// Jacob Branson
// COSC 1030
// Lab 09
//23 Mar. 2022
// Exercise the Time and date class

#include "Date.h"

Date::Date(int month, int day, int year)
{
    setdate(month, day, year);
}

void Date::setdate(int month, int day, int year)
{
    setday(day);
    setmonth(month);
    setyear(year);
}

void Date::setday(int day)
{
    day1 = (day >= 1 && day <= 31) ? day : 1;
}
void Date::setmonth(int month)
{
    month1 = (month >= 1 && month <= 12) ? month : 1;
}
void Date::setyear(int year)
{
    year1 = (year >= 0) ? year : 0;
}

int Date::getday()
{
    return day1;
}
int Date::getmonth()
{
    return month1;
}
int Date::getyear()
{
    return year1;
}

void Date::printmil()
{
    cout << setfill('0') << setw(4) << year1 << "/"
        << setw(2) << month1 << "/" << setw(2) << day1;
}
void Date::printus()
{
    cout << month1
        << "/" << setfill('0') << setw(2) << day1
        << "/" << setw(4) << year1;
}