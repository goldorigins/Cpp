// Prog06.cpp
// Jacob Branson    
// COSC 1030
// program 6
// 2-25-21

#include<cmath> //atan() function
double discArea(double radius)
{
    const double PI = 4 * atan(1.0);
    return PI * radius * radius;
}
double ringArea(double firstr, double secondr, double height)
{
    double vol;
    double area;
    if (firstr > secondr) { // We'll handle any order of inputs.
        area = discArea(firstr) - discArea(secondr);
    }
    else {
        area = discArea(secondr) - discArea(firstr);
    }
    vol = area * height;
    return vol;
}