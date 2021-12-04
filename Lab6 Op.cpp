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




void inp(double &a, double &b, double &c) {
	do {
		cout << "Введіть довжини сторін трикутника\n а = "; cin >> a;
		cout << " b = "; cin >> b;
		cout << " с = "; cin >> c;
		func1(a, b, c);
	} while ((a + b) <= c || (a + c) <= b || (b + c) <= a);

}

void max_square(double Sq1, double Sq2, double Sq3) {
	if ((Sq1 > Sq2) && (Sq1 > Sq3))
		cout << " 1 Трикутник найбільший \n";

	else if ((Sq2 > Sq1) && (Sq2 > Sq3)) 
		cout << " 2 Трикутник найбільший \n";
	else if ((Sq3 > Sq1) && (Sq3 > Sq2)) 
		cout << " 3 Трикутник найбільший \n";


}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a , b , c, a1, b1, c1, a2, b2, c2;
	inp(a, b, c);

	inp(a1, b1, c1);
	double Max;
	inp(a2, b2, c2);
	double Sq1 = formula(a, b, c);
	double Sq2 = formula(a1, b1, c1);
	double Sq3 = formula(a2, b2, c2);
	max_square(Sq1, Sq2, Sq3);
	
}
