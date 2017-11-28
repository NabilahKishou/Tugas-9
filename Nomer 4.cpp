#include <iostream>
using namespace std;

// Deklarasi Global Variable
int panjang = 5;

// Function untuk generate 1d Array
int *generateArray(int number)
{
  int *numbersList = new int[panjang];

  for (int i = 0; i < panjang; i++) {
    numbersList[i] = number + i;
  }

  return numbersList;
}

int main()
{
  int **array2d = new int*[panjang];
  for (int i = 1; i <= panjang; i++) {
    array2d[i - 1] = new int[panjang];
    /*
      Save 1d Arrays into 2d Array
      Formula = i + 1 ( Because Start from 2 )
    */
    array2d[i - 1] = generateArray(i + 1);
  }

  // Print 2d Array
  for (int i = 1; i <= panjang; i++) {
    for (int j = 0; j < panjang; j++) {
      cout << array2d[i - 1][j] << " ";
    }
    cout << endl;
  }
}

