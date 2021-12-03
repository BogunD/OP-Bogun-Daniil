#include <windows.h>
#include <iostream>
using namespace std;
double formula(double n, double k, double f)
{
	double p = ((n + k + f) / 2);
	double Sq = sqrt(p * (p - n) * (p - k) * (p - f));
	return Sq;
}
void func1(double a, double b, double c) {
	if (((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))
		cout << "Сторони  трикутника невірні.Трикутника із такими сторонами не існує! Спробуйте ще раз\n";
	else
		cout << "Square = " << formula(a, b, c) << endl;
}
void inp(double a, double b, double c) {
	do {
		cout << "Введіть довжини сторін трикутника\n а = "; cin >> a;
		cout << " b = "; cin >> b;
		cout << " с = "; cin >> c;
		func1(a, b, c);
	} while ((a + b) <= c || (a + c) <= b || (b + c) <= a);

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a = 0, b = 0, c=0, a1=0, b1=0, c1=0, a2=0, b2=0, c2=0;
	inp(a, b, c);

	inp(a1, b1, c1);

	inp(a2, b2, c2);
	if ((formula(a, b, c)) > (formula(a1, b1, c1)) && (formula(a, b, c)) > (formula(a2, b2, c2)))
		cout << "Перший трикутник найбільший";
	else if ((formula(a1, b1, c1)) > (formula(a, b, c)) && (formula(a1, b1, c1)) > (formula(a2, b2, c2)))
		cout << "Другий трикутник найбільший";
	else if ((formula(a2, b2, c2)) > (formula(a, b, c)) && (formula(a2, b2, c2)) > (formula(a1, b1, c1)))
		cout << "Третій трикутник найбільший";


}
