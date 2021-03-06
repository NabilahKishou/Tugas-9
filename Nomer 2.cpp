#include <iostream>
using namespace std;

// Deklarasi Global Variable
int length = 10;

// Function untuk generate 1d Array
int *generateArray(int number)
{
  int *numbersList = new int[length];

  for (int i = 1; i <= length; i++) {
    numbersList[i - 1] = number * i;
  }

  return numbersList;
}

int main()
{
  int **array2d = new int*[length];
  for (int i = 0; i < length; i++) {
    array2d[i] = new int[length];
    // Save 1d Arrays into 2d Array
    array2d[i] = generateArray(i + 1);
  }

  // Print 2d Array
  for (int i = 1; i <= length; i++) {
    for (int j = 0; j < i; j++) {
      cout << array2d[i - 1][j] << " ";
    }
    cout << endl;
  }
}
