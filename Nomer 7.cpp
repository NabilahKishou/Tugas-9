#include <iostream>
using namespace std;

// Function untuk generate pattern
int **generatePattern(int number, int panjang)
{
  /*
    index = index for array2d
    tempIndex = index for temp
  */
  int index = 0, tempIndex = 0;
  int **array2d = new int*[panjang];

  for (int i = number; i >= 1; i--)
  {
    int *temp = new int[panjang], tempIndex = 0;
    array2d[index] = new int[panjang];

    // First inner part of upper half
    for(int j = number; j > i; j--)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // Second inner part of upper half
    for(int j = 1; j <= (i*2-1); j++)
    {
        temp[tempIndex] = i;
        tempIndex++;
    }

    // Third inner part of upper half
    for(int j = i + 1; j <= number; j++)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // Save temp data into array2d
    array2d[index] = temp;
    index++;
  }

  // Second lower half of the pattern
  for(int i = 1; i < number; i++)
  {
    int *temp = new int[panjang], tempIndex = 0;
    array2d[index] = new int[panjang];

    // First inner part of lower half
    for(int j = number; j > i; j--)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // Second inner part of lower half
    for(int j = 1; j <= (i*2-1); j++)
    {
        temp[tempIndex] = i + 1;
        tempIndex++;
    }

    // Third inner part of lower half
    for(int j = i + 1; j <= number; j++)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // Save temp data into array2d
    array2d[index] = temp;
    index++;
  }

  return array2d;
}

int main()
{
  // Deklarasi Variable
  int value = 0, **numbersList;

  // Save user input in variable
  cout << "Masukkan Nilai Pattern = ";
  cin >> value;

  int panjang = (2 * value) - 1;

  // Memanggil function untuk generate pattern dan menyimpan ke dalam variable
  numbersList = generatePattern(value, panjang);

  // Print pattern
  for (int i = 0; i < panjang; i++) {
    for (int j = 0; j < panjang; j++) {
      cout << numbersList[i][j];
    }
    cout << endl;
  }

}
