/*
Prog03.cpp
Jacob Branson
COSC 1030, Section 01
Prog 03
4 Feb 2022

*/
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int user_in1=1;
	int num1 = 0;
	for (user_in1;user_in1 <= 1;) {
		cout << "Enter an integer greater than or equal to one: " << endl;
		cin >> user_in1;
		
		for (int i = 1; i <= user_in1; i++) {
			num1 += i;

		}
	}
	cout << "The sum of integers from 1 to " << user_in1 << " is " << num1 << endl;
	cout << endl;
	//Part B
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
	cout << endl;
	int x;
	int y;
	cout << "Enter a pair of integers separated by space: " << endl;
	cin >> x;
	cin >> y;
	int unchanged_x = x;
	int counter = 0;
	while (++x < y) {

		counter++;
	}
	cout << "The space between " << unchanged_x << " and " << y << " is " << counter << endl;
	cout << endl;
	//Part C
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << endl;
	int exp = 1;
	int num2 = 0;
	int b;
	int a = 0;
	cout << "Enter any integer: " << endl;
	cin >> num2;
	do {

		cout << "Enter any positive integer: " << endl;
		cin >> exp;
		b = num2;
	} while (exp < 1 || exp>31);
	do {
		num2 = num2 * b;
		++a;
	} while (a + 1 != exp);
	cout << b << " /\\ " << exp <<" = "<< num2 << endl;
	return(0);
}