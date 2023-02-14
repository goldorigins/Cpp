#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int ProcUno(int, int);
int ProcDos(int);
int ProcTres(int, int);


int main() {
    int Input = 0, Answer = 1;
    const int ENDPOINT = -99;
    cout << "Enter your numbers ("; cout << ENDPOINT << " to stop): ";

    while (Input != ENDPOINT) {
        cin >> Input;
        if (Input != ENDPOINT) {
            Answer = Answer * Input;
            cout << Input << " : ";
            cout << Answer << endl;
        }
    }

}