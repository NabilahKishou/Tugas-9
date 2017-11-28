#include <iostream>
using namespace std;

// Declare Global Variable
int panjang = 10;

// Function untuk generate 1d Array
int *generateArray(int number)
{
  int *numbersList = new int[panjang];

  for (int i = 1; i <= panjang; i++) {
    numbersList[i - 1] = number * i;
  }

  return numbersList;
}

int main()
{
  int **array2d = new int*[panjang];
  for (int i = 0; i < panjang; i++) {
    array2d[i] = new int[panjang];
    // Save 1d Arrays into 2d Array
    array2d[i] = generateArray(i + 1);
  }

  // Print 2d Array
  for (int i = 0; i < panjang; i++) {
    for (int j = 0; j < panjang; j++) {
      cout << array2d[i][j] << " ";
    }
    cout << endl;
  }
}
