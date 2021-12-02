#include<iostream>
#include<ctime>
#include<windows.h>

void randomVal(int B[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		B[i] = 20 - (rand() % 40);
		std::cout << B[i] << "\t";
	}
}

double MaxAbs(int B[], int SIZE) {
	std::cout << '\n';
	int Max_abs = abs(B[1] - B[0]);
	for (int i = 1; i < SIZE; i++) {
		int ABS = abs(B[i] - B[i - 1]);
		if (ABS > Max_abs)
			Max_abs = ABS;
	}
	
	return Max_abs;
}
double MinAbs(int B[], int SIZE) {
	int Min_abs = abs(B[1] - B[0]);
	for (int i = 1; i < SIZE; i++) {
		int ABS = abs(B[i] - B[i - 1]);
		if (ABS < Min_abs)
			Min_abs = ABS;
	}
	return Min_abs;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int SIZE;
	std::cout << "Введіть розмір масиву: " << std::endl;
	std::cin >> SIZE;
	int* B = new int[SIZE];
	srand(time(NULL));
	randomVal( B, SIZE);
	double Max_abs = MaxAbs(B, SIZE);
	double Min_abs = MinAbs(B, SIZE);
	std::cout << "Max_abs = "<< Max_abs << "\n";
	std::cout << "Min_abs = " << Min_abs << "\n";
	return 0;
	delete[]B;
}


