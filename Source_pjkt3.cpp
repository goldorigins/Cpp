#include<iostream>
using std::endl;
using std::cin;
using std::cout;


void Swap1(int param1, int param2);   // Both params pass-by-value
void Swap2(int& param1, int& param2);   // Both params pass-by-reference
int main()
{
	int input1, input2;
	cout << "Please enter two integers: ";
	cin >> input1 >> input2;
	cout << "\nYou entered " << input1 << " and " << input2 << endl;
	Swap1(input1, input2);
	cout << "\nAfter Swap1(): " << input1 << " and " << input2 << endl;
	Swap2(input1, input2);
	cout << "\nAfter Swap2(): " << input1 << " and " << input2 << endl;
	return 0;
}
void swap(int num1, int num2) {

	int tmp = num1;

	num1 = num2;

	num2 = tmp;

	cout << num1 << " : " num2 << endl;

}
void Swap2(int& param1, int& param2)
{
	int tmp;
	cout << "\nEntering Swap2(): " << param1 << " and " << param2 << endl;
	tmp = param1;
	param1 = param2;
	param2 = tmp;
	cout << "Leaving Swap2(): " << param1 << " and " << param2 << endl;

	return;
}