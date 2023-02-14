/*
Prog02.cpp
Jacob Branson
COSC 1030, Section 01
Prog 02
27 Jan 2022

this program takes 2 integers and takes the smaller one and does a factorial up to the size of the second
*/
#include<iostream>

int main() {
    float val1 = 3.0;
    float val2 = 2.0;
    cout << "Enter two decimal values:  ";
    cin >> val1 >> val2;
    cout << setprecision(1) << fixed
        << val1 << " " << val2;
}