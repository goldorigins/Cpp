// Lab07.cpp
// Jacob Branson
// COSC1030
// Lecture 10
// Mar. 3 2022
//

#include <iostream>
#include <fstream>
#include <sstream>

using std::ofstream;
using std::ifstream;
using std::cin;
using std::endl;
using std::cout;
using std::getline;
using std::string;

int main()
{
    ifstream infile;
    string line;
    char fileName[20];

    while (true) {
        cout << "Enter file to be copied : ";
        cin >> fileName;
        infile.open(fileName); 

        if (infile.is_open()) 
        {
            cout << "Enter file to copy to : ";
            cin >> fileName;
            ofstream writer(fileName); 
            cout << "reading file..." << endl;
            cout << "copying file ..." << endl;
            while (getline(infile, line, '\n')) { 
                writer << line << endl;
            }

            infile.close(); 
            writer.close(); 
            cout << "file copy complete..." << endl;
            break;
        }

        else 
        {
            cout << "Sorry, "<<fileName<<" could not be found." << endl;
        }
    }


    return 0;
}