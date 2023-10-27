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

void factoresPrimos(int num)
{
  int numX = num;
  int i = 2;

  while (numX > 1)
  {
    if (!(numX % i))
    {
      numX /= i;
      cout << i << " ";
    }
    else
    {
      i++;
    }
  }
}

int main()
{
  int num = 0;
  cout << "Ingresa un numero: ";

  cin >> num;
  factoresPrimos(num);

  return 0;
}
