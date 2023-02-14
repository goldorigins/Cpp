#pragma once
// Lab14.cpp
// Jacob Branson
// COSC1030
// Lab 14
// Main program 
// changed nothing here
#ifndef L14FUNCS_HPP
#define L14FUNCS_HPP
#include <string>
using std::string;
void  getNurse(string&);
void  getPatient(string&);
void  getPulse(int&);
void  getBP(int&, int&);
void  displayRecord(string&, string&, int, int, int);
#endif