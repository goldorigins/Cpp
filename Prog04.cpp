/*
Prog04.cpp
Jacob Branson
COSC 1030, Section 01
Prog 04
11 Feb 2022

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int myPrompt(void);
int mySum(int user_input);
int myFact(int user_input);
int myMod(int user_input);
void myPrint(int user_input, int result);

int main() {
	int user_input, result;
	

	for (int user_input = myPrompt(); user_input != -9999;) {
		if (user_input <= 45 && user_input >= 10) {
			result = mySum(user_input);
		}
		else if (user_input > 45) {
			result = myMod(user_input);
		}
		else {
			result = myFact(user_input);
		}
		myPrint(user_input, result);
		user_input = myPrompt();
	}
	return 0;
}

int myPrompt(void) {
	int tmp;
	do {
		cout << "Enter a non-neg integer (-9999 to end): " << endl;
		cin >> tmp;
	} while (tmp < 0 && tmp != -9999);
	int user_input = tmp;

	return user_input;
}

int mySum(int user_input) {
	int i;
	int sum = 0 ;
	for (i = 1; i <= user_input; i++) {
		sum += i;
	}

	return sum;
}

int myFact(int user_input) {
	int fact = 1;
	for (int i = 1; i <= user_input; ++i){
		fact *= i;
	}

	return fact;
}

int myMod(int user_input) {
	int mod = user_input % 13;

	return mod;
}

void myPrint(int user_input, int result) {
	if (user_input <= 45 && user_input >= 10) {
		cout << "The sum of integers from 1 to " << user_input << " is " << result << endl;
	}
	else if (user_input > 45) {
		cout <<"The remainder of " << user_input << " / 13 is " << result << endl;
	}
	else {
		cout << "The product from 1 to " << user_input << " is " << result << endl;
	}
	return;
}
