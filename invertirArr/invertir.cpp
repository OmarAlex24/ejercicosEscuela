#include <iostream>
using namespace std;

void leerArr(int arr[], int largo)
{

  for (int i = 0; i < largo; i++)
  {
    cout << "Ingresa el digito " << i + 1 << ": ";
    cin >> arr[i];
  }
}

void invertirArr(int arr[], int largo)
{
  int temp;
  for (int i = 0; i < largo / 2; i++)
  {
    temp = arr[largo - 1 - i];
    arr[largo - 1 - i] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int largo;
  cout << "Ingresa los digitos que ingresara: ";
  cin >> largo;

  int arr[largo];

  leerArr(arr, largo);

  invertirArr(arr, largo);

  for (int i = 0; i < largo; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
