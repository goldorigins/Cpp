// Prog14.cpp
// Jacob Branson
// COSC 1030
// Program 14
// 29 Apr. 2022
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<vector>
using std::vector;

#include <algorithm>
using std::sort;

#include<string>
using std::string;

#include<fstream>
using std::ifstream;
using std::getline;

string PromptUser()
{
	string filename;
	cout << "Please enter the name of a file containing integers." << endl << "We'll return the number of integers, mean and median." << endl;
	cin >> filename;
	return filename;
}

int ReadData(vector<int>& theData, ifstream& in)
{
	in.open(PromptUser());
	if (in.is_open())
	{
		int a;
		while (!in.eof())
		{
			in >> a;
			theData.push_back(a);
		}
		return 0;
	}
	else
	{
		return 1;
	}
}


void ComputeStats(vector<int>& theData, double& mean, double& median) {

	int sum = 0;
	for (size_t i = 0; i < theData.size(); i++)
	{
		sum += theData[i];
	}

	mean = sum / theData.size();

	size_t size = theData.size();
	sort(theData.begin(), theData.end());

	if (size % 2 == 0){

		median = (theData[size / 2 - 1] + theData[size / 2]) / 2;
	}
	else{

		median = theData[size / 2];
	}

	return;
}

void DisplayStats(int num, double mean, double median)
{
	cout << "********** Data Summary **********" << endl;
	cout << "Number of Values:\t" << num << endl;
	cout << "Mean Value:\t\t" << mean << endl;
	cout << "Median Value:\t\t" << median << endl;
	cout << "**********************************" << endl;
	return;
}

int main()
{
	vector<int> theData;
	ifstream infile;


	int rtn = ReadData(theData, infile);

	if (rtn == 1)
	{
		cout << "Could not open the file." << endl;
		return 0;
	}

	infile.close();
	int numValues = theData.size();
	double meanValue, medianValue;

	ComputeStats(theData, meanValue, medianValue);

	DisplayStats(numValues, meanValue, medianValue);

	return 0;
}