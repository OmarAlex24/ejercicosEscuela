#include <iostream>
using namespace std;
int main()
{
  int numNumeros;
  int num;
  int cont = 0;
  int mayor = 0;

  cout << "Ingresa la cantidad de numeros a comparar: ";
  cin >> numNumeros;

  while (cont < numNumeros)
  {
    cout << "Ingresa el num " << cont + 1 << ": ";
    cin >> num;
    if (num > mayor)
    {
      mayor = num;
    }
    cont++;
  }
  cout << "El numero mayor es: " << mayor;

  return 0;
}
