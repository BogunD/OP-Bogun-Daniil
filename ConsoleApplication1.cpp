#include <iostream>
#include "math.h"
#include "windows.h"

using namespace std;
int main()
{
	float sq1, sq2, r, result;// sq1 - площа заданого квадрату;  sq2 - площа меншого кв., r - радіус. 
	float a1, a2; // a1 - сторона заданого кв., a2 - сторона меншого кв.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть площу заданого квадрата: " << endl;
	cin >> sq1;
	a1 = sqrt(sq1);
	r = a1 / 2;
	a2 = r * sqrt(2);
	sq2 = pow(a2, 2);
	result = sq1 / sq2;
	cout << " Площа меншого квадрату: " << sq2 << endl;
	cout << "Площа заданого квадрату більша у " << result << " разів ніж площа меншого квадрату";
	return 0;
	

	
}



