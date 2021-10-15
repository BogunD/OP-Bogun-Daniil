
#include <iostream>
#include <windows.h>

int main()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, k = 1 ;
    double sum = 0;
    do {
        cout << "Введіть натуральне число n \n n = ";  cin >> n;
        if ( n < 0 || n > 9 )
            cout << "Помилка введення.";
    } while ( n < 0 || n > 9 );

    for (k; k <= n; k++)
    {
        sum += 1. / (k * pow((2 * k + 1), 2));
    }

    cout << "Sum = " << sum << endl;
    system("pause");
    return 0;
    
}
