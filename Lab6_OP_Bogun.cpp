#include <windows.h>
#include <iostream>
using namespace std;
double formula(double n, double k, double f)
{
	
	 
	 double p = ((n + k + f)/2);
	 double Sq = sqrt(p * (p - n) * (p - k) * (p - f));
	 cout << "Square = "<< Sq;
	 return Sq;
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c;
	   do {
			cout << "Введіть довжини сторін трикутника\n а = "; cin >> a;
			cout << " b = "; cin >> b;
			cout << " с = "; cin >> c;
			if ((a + b) < c || (a + c) < b || (b + c) < a)
				cout << "Трикутника із такими сторонами не існує! Спробуйте ще раз\n";
			else
				formula(a, b, c);
		} while ((a + b) < c || (a + c) < b || (b + c) < a);
	
	
}


