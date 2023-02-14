// Lab08.cpp
// Jacob Branson    
// COSC 1030
// Lab 06
// 9 Mar. 2022

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void my_prompt(void);
void datainput(double&, double&);
void datainput(int&, double&, double&,double&);
void computecharges(double, double);
void computecharges(int, double, double, double);


int main() {

	my_prompt();
	return 0;

}

void my_prompt() {

	int days;
	double rate;
	double meds;
	double services;
	double total;

	char user_in;
	cout << "Charge computation for Inpatient(I) or Outpatient(O): " << endl;
	cin >> user_in;


	switch (user_in) {

	case 'I':
		datainput(days, rate, meds, services);
		break;
	case 'i':
		datainput(days, rate, meds, services);
		break;
	case 'O':
		datainput(meds, services);
		break;
	case 'o':
		datainput(meds, services);
		break;
	default:
		cout << "Please enter O for outpaitent or I for inpaitent!" << endl;
		cout << "Program needs re-ran..." << endl;
		break;
	}
	return;
}

void datainput(int& days, double& rate, double& meds, double& services) {
	cout << "Charge computation for inpaitent:" << endl;
	do {
		cout << "Number days: " << endl;
		cin >> days;
	} while (days <= 0);
	do {
		cout << "Daily rate: " << endl;
		cin >> rate;
	} while (rate <= 0);
	do {
		cout << "Medicine charges: " << endl;
		cin >> meds;
	} while (meds <= 0);
	do {
		cout << "Service charges: " << endl;
		cin >> services;
	} while (services <= 0);
	computecharges(days, rate, meds, services);

	return;
}
void datainput(double& meds, double& services) {
	cout << "Charge computation for outpaitent:" << endl;
	do {
		cout << "Medicine charges: " << endl;
		cin >> meds;
	} while (meds <= 0);
	do {
		cout << "Service charges: " << endl;
		cin >> services;
	} while (services <= 0);
	computecharges(meds, services);
	return;
}

void computecharges(double meds, double services) {
	double sum = meds + services;
	cout << "Total charges: $"<< sum << endl;
	return;
}
void computecharges(int days, double rate, double meds, double services) {
	double sum = days * rate + meds + services;
	cout << "Total charges: $" << sum<< endl;
	return;
}