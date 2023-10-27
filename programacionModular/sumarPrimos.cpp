#include <iostream>
using namespace std;

int esPrimo(int num)
{
  int i = 2;
  int band = 1;

  while (band && i < num)
  {
    if (num % i == 0)
    {
      band = 0;
    }
    i++;
  }
  return band;
}

int main()
{
  int suma = 0;
  int n, x;

  cout << "Ingresa la cantidad de numeros a ingresar: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "\nIngresa un numero: ";
    cin >> x;

    if (esPrimo(x))
    {
      suma += x;
    }
  }

  cout << suma << endl;

  return 0;
}
