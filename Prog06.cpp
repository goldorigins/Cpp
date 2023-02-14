// Prog06.cpp
// Jacob Branson    
// COSC 1030
// program 6
// 2-25-21

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// My header file.
// DO NOT INCLUDE THE .cpp
#include "DWallVol.hpp"

int main()
{
    double inner, outer, height;
    do {
        cout << "Enter the inner wall radii(>=0): "<<endl;
        cin >> inner;
    } while (inner<0);
    do {
        cout << "Enter outer wall radii(>=0): " << endl;
        cin >> outer;
    } while (outer < 0);
    do {
        cout << "Enter height(>=0): " << endl;
        cin >> height;
    } while (height < 0);

    cout << endl << "A hollow cylinder with radial dimensions of "
        << inner << " and " << outer <<" and height "<<height<<endl
        << "has volume of "
        << ringArea(inner, outer,height) << " square cm." << endl;
    return 0;
}