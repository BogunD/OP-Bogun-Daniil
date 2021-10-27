#include <iostream>
#include <windows.h>

int main()
{
    using namespace std;
    int a = 22199;

    for (a; a < 22300; a++) {
        for (a; a % 15 == 0; a++) {
            cout << a << endl;
        }
    }
}