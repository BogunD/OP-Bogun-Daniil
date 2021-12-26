
#include <iostream>
#include <stdio.h>
#include <string>

int FindSum(char str[]);
int main() {
	char s[255];
	std::cout << "Enter groups of numbers: "; gets_s(s);
	int i = FindSum(s);
	std::cout << "Sum = " << i;

}
int FindSum(char str[]) {
	int sum = 0;
	int currentNum = 0;
	const char* delim = " ";
	char* curr_ptr;
	char* next_ptr = NULL;
	curr_ptr = strtok_s(str, delim, &next_ptr);
	while (curr_ptr != NULL) {
		currentNum = std::stoi(curr_ptr);
		sum += currentNum;
		curr_ptr = strtok_s(NULL, delim, &next_ptr);
	}
	return sum;
}

