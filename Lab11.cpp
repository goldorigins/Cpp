// Lab11.cpp
// Jacob Branson
// COSC 1030
// Lab 11
// 7 Apr. 2022
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cstring>
using std::strlen;//when I placed the _s here it auto corrected to strlen and when I did it again it errored out?
int main()
{

	char buffer[256], tmp;
	int num = 0;

	cout << "Please enter a string" << endl;
	cin >> buffer;
	cout << "Echoing that string: " << buffer << endl << 
		"Please enter a sentence (less than 256 characters): " << endl;
	cin.ignore();
	cin.getline(buffer, 256);
	cout << "You entered " << strlen(buffer) << " characters. And " << cin.gcount() << " were removed from the stream." << endl;
	cout << "Please give me an integer between 0 and "<< strlen(buffer)<< " : " << endl;
	cin >> num;
	tmp = buffer[num];
	buffer[num] = 0;
	cout << " The sentence is now: " << buffer << endl;
	buffer[num] = tmp;
	cout << " The original is now: " << buffer << endl;

	return 0;
}