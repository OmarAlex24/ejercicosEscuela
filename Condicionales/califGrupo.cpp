#include <iostream>
using namespace std;

int main()
{
  int numCalifs, calif;
  int contador = 0;
  int A = 0, B = A, C = B, D = C, E = D, F = E;

  cout << "Ingresa el numero de calificaciones a evaluar: ";
  cin >> numCalifs;

  while (contador < numCalifs)
  {
    cin >> calif;
    if (calif != 10)
    {
      if (calif < 6)
      {
        F++;
      }
      else
      {
        if (calif >= 9)
        {
          B++;
        }
        else if (calif >= 8)
        {
          C++;
        }
        else if (calif >= 7)
        {
          D++;
        }
        else
        {
          E++;
        }
      }
    }
    else
    {
      A++;
    }
    contador++;
  }
  cout << "A: " << A << "\n";
  cout << "B: " << B << "\n";
  cout << "C: " << C << "\n";
  cout << "D: " << D << "\n";
  cout << "E: " << E << "\n";
  cout << "F: " << F << "\n";

  return 0;
}
