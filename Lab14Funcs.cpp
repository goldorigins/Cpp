// Lab14.cpp
// Jacob Branson
// COSC1030
// Lab 14
// Main program 
// changes here
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setfill;
using std::setw;
#include "Lab14Funcs.hpp"

void  getNurse(string& dnurse)
{
    //changes here
    cout << "Enter nurse's name: ";
    cin.clear();
    getline(cin, dnurse);
}

void  getPatient(string& dpatient)
{
    //changes here
    cout << "Enter patient's name: ";
    cin.clear();
    getline(cin, dpatient);
}

void  getPulse(int &dpulse)
{
    //changes here
    cout << "Enter pulse rate: ";
    cin.clear();
    cin >> dpulse;
}

void  getBP(int &dsyst, int &ddiast)
{
    //changes here
    cout << "Enter systolic BP: ";
    cin.clear();
    cin >> dsyst;
    cout << "Enter diastolic BP: ";
    cin >> ddiast;
}

void  displayRecord(string& dpatient, string& dnurse, int dpulse, int dsyst, 
    int diast)
{
  cout << setfill('*') << setw(40) << "*" << endl;
  cout << "*  " << "Patient:  " << dpatient << endl;
  cout << "*  " << "Nurse:    " << dnurse << endl;
  cout << "*  " << "Pulse:    " << dpulse << endl;
  cout << "*  " << "BP:       " << dsyst << "/" << diast << endl;
  cout << setfill('*') << setw(40) << "*" << endl;
}