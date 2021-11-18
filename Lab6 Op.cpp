#include <windows.h>
#include <iostream>
using namespace std;
double formula(double n, double k, double f)
{
	double p = ((n + k + f) / 2);
	double Sq = sqrt(p * (p - n) * (p - k) * (p - f));
	return Sq;
}
void func1(int a, int b, int c) {
	if (((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))
		cout << "Сторони другого трикутника невірні.Трикутника із такими сторонами не існує! Спробуйте ще раз\n";
	else
		cout << "Square = " << formula(a, b, c) << endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, a1, b1, c1, a2, b2, c2;

	
	do {
		cout << "Введіть довжини сторін трикутника\n а = "; cin >> a;
		cout << " b = "; cin >> b;
		cout << " с = "; cin >> c;
		func1( a, b, c);
	} while ((a + b) <= c || (a + c) <= b || (b + c) <= a);

	do {
		cout << "Введіть довжини сторін другого трикутника\n а = "; cin >> a1;
		cout << " b = "; cin >> b1;
		cout << " с = "; cin >> c1;
	    func1( a1, b1,  c1);
	} while ((a1 + b1) <= c1 || (a1 + c1) <= b1 || (b1 + c1) <= a1);


	do {
		cout << "Введіть довжини сторін третього трикутника\n а = "; cin >> a2;
		cout << " b = "; cin >> b2;
		cout << " с = "; cin >> c2;
		func1(a2, b2, c2);
	} while ((a2 + b2) <= c2 || (a2 + c2) <= b2 || (b2 + c2) <= a2);


	if ((formula(a, b, c)) > (formula(a1, b1, c1)) && (formula(a, b, c)) > (formula(a2, b2, c2)))
		cout << "Перший трикутник найбільший";
	else if ((formula(a1, b1, c1)) > (formula(a, b, c)) && (formula(a1, b1, c1)) > (formula(a2, b2, c2)))
		cout << "Другий трикутник найбільший";
	else if ((formula(a2, b2, c2)) > (formula(a, b, c)) && (formula(a2, b2, c2)) > (formula(a1, b1, c1)))
		cout << "Третій трикутник найбільший";

	else
		cout << "Трикутники рівні" << endl;


}