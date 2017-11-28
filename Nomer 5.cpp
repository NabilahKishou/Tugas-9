#include <iostream>

using namespace std;

// Deklarasi Global Variable
int panjang = 15;

// Function to generate 1D Array
int *generateArray()
{
  int *numbersList = new int[panjang];

  for (int i = 1; i <= panjang; i++) {
    numbersList[i - 1] = i * 2;
  }

  return numbersList;
}

int main()
{
  // Deklarasi variable
  int *array1d = new int[panjang];

  // Call function to save list of number into variable
  array1d = generateArray();

  // Print Array
  for (int i = 0; i < panjang; i++) {
    cout << array1d[i] << " ";
  }
}


