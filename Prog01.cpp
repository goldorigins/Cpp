/*
Prog01Pcode.txt
Jacob Branson
COSC 1030, Section 01
Prog 01
21 Jan 2022

This program accepts 4 intiger inputs and sums them
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int user_in1 = 0;
	int user_in2 = 0;
	int user_in3 = 0;
	int user_in4 = 0;
	while (user_in4 != -9999) {
		cout << "Enter the first integer value: " << endl;
		cin >> user_in1;
		cout << "Enter the second integer value: " << endl;
		cin >> user_in2;
		cout << "Enter the third integer value: " << endl;
		cin >> user_in3;
		cout << "Enter the fourth integer value (-9999 to kill): " << endl;
		cin >> user_in4;

		cout << "The sum of "<< user_in1<<", " << user_in2 << ", " << user_in3 << " and " << user_in4 << " is :" << (user_in1 + user_in2 + user_in3 + user_in4) << endl;
	}

}