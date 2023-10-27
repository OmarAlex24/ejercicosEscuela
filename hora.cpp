#include <iostream>
using namespace std;

int main()
{
  int hora, minuto, segundo;

  cout << "Programa que muestra la hora ingresada del siguiente segundo\n";
  cout << "Ingresa la hora en formato hh: ";
  cin >> hora;
  cout << "\nIngresa la hora en formato mm: ";
  cin >> minuto;
  cout << "\nIngresa la hora en formato ss: ";
  cin >> segundo;

  segundo++;

  if (segundo == 60)
  {
    segundo = 0;
    minuto++;
    if (minuto == 60)
    {
      minuto = 0;
      hora++;
    }
  }
  cout << "\nSon las: " << hora << ":" << minuto << ":" << segundo;
}
