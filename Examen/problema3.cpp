#include <iostream>
using namespace std;
void leerArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}
void imprimirArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void recorrerUno(int arr[], int n)
{
  int aux = arr[n - 1];
  for (int i = n - 1; i >= 1; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = aux;
}

int main()
{
  int n;
  cout << "Ingresa la longitud del arreglo: " << endl;
  cin >> n;

  int arr[n];

  leerArr(arr, n);

  recorrerUno(arr, n);

  imprimirArr(arr, n);

  return 0;
}
