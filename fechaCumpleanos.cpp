#include <iostream>
using namespace std;

int main()
{
  int diaCumple, mesCumple, anoCumple, diaActual, mesActual, anoActual;
  int edad = 0;

  cout << "Programa que calcula cuantos años tienes\n";

  cout << "\nIngresa tu dia de cumple: ";
  cin >> diaCumple;
  cout << "\nIngresa tu mes de cumple: ";
  cin >> mesCumple;
  cout << "\nIngresa tu ano de cumple: ";
  cin >> anoCumple;

  cout << "\nIngresa el dia actual: ";
  cin >> diaActual;
  cout << "\nIngresa el mes actual: ";
  cin >> mesActual;
  cout << "\nIngresa el ano actual: ";
  cin >> anoActual;

  edad = anoActual - anoCumple;

  if (mesActual - mesCumple <= 0)
  {
    if (diaActual - diaCumple < 0)
    {
      edad--;
    }
  }

  cout << "Tu edad: " << edad;
}
