/*
Prog02.cpp
Jacob Branson
COSC 1030, Section 01
Prog 02
27 Jan 2022

this program takes 2 integers and takes the smaller one and does a factorial up to the size of the second
*/
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int user_in1 = 0;
int user_in2 = 0;
int counter = 1;
int main()
{

	cout << "Enter the first integer: " << endl;
	cin >> user_in1;
	cout << "Enter the second integer: " << endl;
	cin >> user_in2;
	if (user_in1 > user_in2) {
		int i = 1;
		int x = user_in2;
		int sum = user_in2;
		while (x+1 <= user_in1) {
			sum *= user_in2 + i;
			i++;
			x++;
		}
		cout << "The product of integers over this interval is: " << sum << endl;
	}
	else if(user_in2 > user_in1) {
		int i = 1;
		int x = user_in1;
		int sum = user_in1;
		while (x + 1 <= user_in2) {
			sum *= user_in1 + i;
			i++;
			x++;
		}
		cout << "The product of integers over this interval is: " << sum << endl;
	}
	else {
		cout << "The product of integers over this interval is: "<<user_in1;
	}
	
	return 0;
}