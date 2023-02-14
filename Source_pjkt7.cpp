#include<iostream>
using std::cout;
class Point {
public:
    Point() { cout << "Constructor called\n"; }
};

int main()
{
    Point t1, * t2;
    return 0;
}