#include <iostream>
#include <iomanip>
int** matrix(int a) {
   int** arr = new int* [a];
   int x = 0;
   for (int i = 0; i < a; i++) 
       arr[i] = new int[a];
   for (int i = 0; i < a; i++) {
       for (int j = 0; j < a; j++) {
           arr[i][j] = x;
           x++;
           std::cout << std::setw(5) << arr[i][j];
      }
       std::cout << "\n";
  }
   return arr;
}





int find_max(int R, int ST, int size, int** arr) {
    int a = ST;
    int b = ST;
    int max = arr[R][ST];
    for (R; R < size; R++) {
        for (a; a <= b; a++) {
            if (max < arr[R][a])
                max = arr[R][a];
        }
        if(a - 1 > 0) 
            a--; 
        
        if (b + 1 < size) 
            b++;
        
    }
    return max;
}

int** sec_arr(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = find_max(i, j, size, arr);
            std::cout << std::setw(5)<< arr[i][j] ;
        }
        std::cout << "\n";
    }
    return arr;
}


void main()
{
    int size;
    std::cout << " Matrix (a*a)\n Enter matrix size:\n a =  ";  std::cin >> size ;
    std::cout << "\n";
    int** A = new int* [size];
    for (int i = 0; i < size; i++)
        A[i] = new int[size];
    int** B = new int* [size];
    for (int i = 0; i < size; i++)
        B[i] = new int[size];
    A = matrix(size);
    std::cout <<"\n\n"<< "Result:" << "\n\n";
    B = sec_arr(A, size);
    delete[] A, B;
}
