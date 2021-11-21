#include<iostream>
#include<ctime>
#include<windows.h>





int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int SIZE;
	std::cout << "Введіть розмір масиву: " << std::endl;
	std::cin >> SIZE;
	int* B = new int[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		B[i] = 20 - (rand() % 40);
		std::cout << B[i] << "\t";
	}
	std::cout << '\n';
	int Max_abs = abs(B[1] - B[0]);
	int Min_abs = Max_abs;
	for (int i = 2; i < SIZE; i++) {
		int ABS = abs(B[i] - B[i - 1]);
		if (ABS > Max_abs)
			Max_abs = ABS;
		if (ABS < Min_abs)
			Min_abs = ABS;
		}
		std::cout << "Max_abs = " << Max_abs << "\n";
		std::cout << "Min_abs = " << Min_abs << "\n";
		return 0;
		delete[]B;
	}

	
	
	
