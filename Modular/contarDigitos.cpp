#include <iostream>
using namespace std;

int contarDigitos(int num) // 1000
{
  int numDigitos = 0;

  while (num != 0)
  {
    num /= 10;    //  / 10 = 0
    numDigitos++; // i = 1
  }

  return numDigitos;
}

int main()
{
  int num;

  cout << "Programa que cuenta cuantos digitos tiene un numero " << endl;

  cout << "Ingresa un numero: ";
  cin >> num; // 1000

  cout << num << " tiene " << contarDigitos(num) << " digitos" << endl;

  return 0;
}
