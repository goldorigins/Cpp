// Lab14.cpp
// Jacob Branson
// COSC1030
// Lab 14
// Main program 
// changed nothing here
#include "Lab14Funcs.hpp"
int main()
{
	string patient;
	string nurse;
	int  pulse, systolic, diastolic;
	getNurse(nurse);
	getPatient(patient);
	getPulse(pulse);
	getBP(systolic, diastolic);
	displayRecord(nurse, patient, pulse, systolic, diastolic);
	return 0;
}