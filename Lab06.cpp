/*
Lab06.cpp
Jacob Branson
COSC 1030, Section 01
Lab 06
24 Feb 2022

*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int sum = 0;
    int counter = 0;
    int input = 0;
    int  a;
    float average;

    
    while (input!=-9999)
    {
        cout << " Enter numbers to be averaged: ";
        cin >> input;
        do   // While we have an error reading...
        {
            cin.clear();  // Remove the error state in stream
            cin.ignore(); // Read but ignore the next character
        } while (!(cin >> a));

        sum += input;
        counter++;
        average = sum / counter;

    }
    cout << "your average is: " << average << endl;
    return 0;
}
