#include <iostream>
using namespace std;

long aBin(int n)
{
  int c = n;
  long b = 0;

  for (int i = 1; c > 0; i = i * 10)
  {
    b += (c % 2) * i;
    c /= 2;
  }
  return b;
}

int main()
{
  int num;

  cout << "Programa que convierte un numero decimal a binario\n";
  cout << "Ingresa un numero: ";
  cin >> num;
  cout << "El numero en binario es: " << aBin(num) << "\n";

  return 0;
}
