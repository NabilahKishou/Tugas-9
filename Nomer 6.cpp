#include <iostream>
using namespace std;

// Function to generate 1d Array
int *generateArray(int number, int panjang)
{
  int *numbersList = new int[panjang];

  for (int i = 0; i < panjang; i++) {
    numbersList[i] = number;
  }

  return numbersList;  
}

// Function to generate mirror number ex : 12321
int *mirror(int number, int panjang)
{
  int *numbersList = new int[panjang];
  int temp = number;

  for (int i = 0; i < panjang; i++) {
    numbersList[i] = (i < number - 1) ? temp-- : temp++;
  }

  return numbersList;
}

int main()
{
  // Deklarasi variable
  int *numbers, value = 0;

  // Save user input into variable
  cout << "Masukkan Nilai N = ";
  cin >> value;

  int panjang = (2 * value) - 1, **array2d = new int*[panjang];

  numbers = mirror(value, panjang);

  for (int i = 0; i < panjang; i++) {
    array2d[i] = new int[panjang];
    // Save 1d Arrays into 2d Array
    array2d[i] = generateArray(numbers[i], panjang);
  }

  // Print 2d Array
  for (int i = 0; i < panjang; i++) {
    for (int j = 0; j < panjang; j++) {
      cout << array2d[i][j] << " ";
    }
    cout << endl;
  }
}
