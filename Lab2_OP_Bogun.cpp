#include <iostream>
#include "math.h"
#include "windows.h"

using namespace std;
int main()
{
	float a, b, c, x, y;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть довжину цеглини (см) " << endl;
	cin >> a;
	cout << "Введіть ширину цеглини (см) " << endl;
	cin >> b;
	cout << "Введіть висоту цеглини (см) " << endl;
	cin >> c;
	cout << "Введіть ширину отвору (см) " << endl;
	cin >> x;
	cout << "Введіть висоту отвору (см) " << endl;
	cin >> y;
	if (x >= a && y >= b || x >= b && y >= a)
		cout << "Цеглина проходить в отвір";
	else if (x >= c && y >= b || x >= b && y >= c)
		cout << "Цеглина проходить в отвір";
	else if (x >= b && y >= c || x >= c && y >= b)
		cout << "Цеглина проходить в отвір";
	else
		cout << "Цеглина не проходить в отвір";

}


