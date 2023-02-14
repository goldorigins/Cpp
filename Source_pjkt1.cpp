#include <iostream>
using namespace std;
int main() {
    int time = 6;
    int count = 8;
    int loop;

    for (loop = 0; loop < time; loop++)
    {
        if (loop < 4)
        {
            count = count - 2;
        }
        else {
            count = count + 1;
        }
    }

    cout << "loop: " << loop << " and count is " << count << endl;
}