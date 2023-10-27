#include <iostream>
using namespace std;

int main()
{
  int L1, L2, L3;

  cout << "Ingresa 3 longitudes: " << endl;

  cin >> L1 >> L2 >> L3;

  if (L1 + L2 > L3 && L1 + L3 > L2 && L3 + L2 > L1) // Si es un triangulo
  {
    if (L1 == L2 && L2 == L3) // Si sus lados son iguales
    {
      cout << "Es un triangulo equilatero" << endl;
    }
    else
    {
      if (L1 == L2 || L2 == L3 || L1 == L3) // Si almenos una pareja es igual
      {
        cout << "Isoceles" << endl;
      }
      else // Todos son diferentes
      {
        cout << "Escaleno" << endl;
      }
    }
  }
  else
  {
    cout << "No es triangulo " << endl;
  }

  return 0;
}
