// FiboImp.cpp
// Jacob Branson
// COSC 1030
// Prog 08
// 11 Mar. 2022
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setfill;
using std::setw;
#include "FiboImp.h"
#include <windows.h>
const int MAXN(45);
int main()
{
    unsigned long int before1, after1, diff, result;
    cout << "Execution time for Fibonacci no. implementions (ms)\n";
    cout << setfill('+') << setw(64) << "+" << endl << setfill(' ');
    cout << setw(4) << "n" << setw(30) << "Recursive"
        << setw(30) << "Iterative" << endl;
    cout << setfill('+') << setw(64) << "+" << endl << setfill(' ');
    for (int n = 0; n <= MAXN; n++) {

        cout << setw(4) << n;

        unsigned long int b4counts[6] = { GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount()};

        result = FiboRecursive(n);

        unsigned long int aftercounts[6] = { GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount() };
         
        unsigned long int max = *std::max_element(std::begin(aftercounts), std::end(aftercounts));
        unsigned long min = *std::min_element(std::begin(b4counts), std::end(b4counts));


        
        cout << setw(20) << result << setw(10) << min << "----"<<max;


        unsigned long int b4count[6] = { GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount() };

        result = FiboIterative(n);

        unsigned long int aftercount[6] = { GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount(),  GetTickCount() };

        unsigned long int max1 = *std::max_element(std::begin(aftercount), std::end(aftercount));
        unsigned long min1 = *std::min_element(std::begin(b4count), std::end(b4count));


        cout << setw(20) << result << setw(10) << min1 << "----" << max1;

        cout << endl;
    }
    return 0;
}