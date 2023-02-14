// Lab04.cpp
// Jacob Branson
// COSC 1030
// Lab 04
// Feb 9, 2021
// Compute several exercise related heart rate 
//    targets based upon age and resting heart rate.
// Reference: see HRmax, HRR and THR on 
//    http://en.wikipedia.org/wiki/Heart_rate
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void  DisplayIntroduction(void);
int   PromptForAge(void);
int   PromptForHRrest(void);
int   ComputeHRmax(int age);
int   ComputeHRR(int age, int HRrest);
int   ComputeTHR85(int age, int HRrest);
void  DisplayResults(int HRMax, int HRR, int THR85);

int main()
{
	int age, HRrest;
	int HRmax, HRR, THR85;
	DisplayIntroduction();
	age = PromptForAge();
	HRrest = PromptForHRrest();
	HRmax = ComputeHRmax(age);
	HRR = ComputeHRR(age, HRrest);
	THR85 = ComputeTHR85(age, HRrest);
	DisplayResults(HRmax, HRR, THR85);
	return 0;
}

// Stubby implementations here. 
// These need lots of work!
void  DisplayIntroduction(void) { 
	cout << "=======================================================" << endl;
	cout << "Using your age and resting heart rate," << endl;
	cout << "this program computes excercise heart rate information." << endl;
	cout << "=======================================================" << endl;
	return; }

int   PromptForAge(void) {
	int tmp;
	do {
		cout << "Enter your age to the nearest year: " << endl;
		cin >> tmp;
	} while (tmp <= 0);
	int age = tmp;
	return age; }

int   PromptForHRrest(void) {
	int tmp;
	do {
		cout << "Enter your resting heart rate as an integer: " << endl;
		cin >> tmp;
	} while (tmp <= 0);
	int HRrest = tmp;
	return HRrest; }

int   ComputeHRmax(int age) {
	int HRmax = 220 - age;	//using Haskel and Fox method
	return HRmax; }

int   ComputeHRR(int age, int HRrest) {
	return 1; }
int   ComputeTHR85(int age, int HRrest) { return 1; }
void  DisplayResults(int HRMax, int HRR, int THR85) { return; }

