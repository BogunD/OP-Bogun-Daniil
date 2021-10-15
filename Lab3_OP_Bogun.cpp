#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 1;
    double a,
        p = -1,
        xn = 1,
        x = 0,
        Sum = 0,
        Y,
        res,
        eps = 1.e-6;

    do
    {
        cout << "0<a<=2  a="; cin >> a;
        if (a <= 0 || a >= 2)
            cout << "Невірне значення а. 0<a<2  a= \n";
    } while (a <= 0 || a >= 2);

    while (abs(xn - x) > eps)
    {
        x = xn;
        p *= -(a - 1);
        xn = p / n;
        Sum += xn;
        n++;
    }

    Y = log(a);
    res = Sum / Y;

    cout << "a=" << a << "  Sum=" << Sum << "  res=" << res << " n=" << n << "\n";

    system("pause");
    return 0;
}