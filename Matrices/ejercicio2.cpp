#include <iostream>
using namespace std;

int esSimetrica(int matriz[][3], int n)
{
  int bandera = 1;
  int i = 0;
  while (bandera && i < n - 1)
  {
    int j = i + 1;
    while (bandera && j < n)
    {
      if (matriz[i][j] != matriz[j][i])
      {
        bandera = 0;
      }

      j++;
    }
    i++;
  }
  return bandera;
}

int main()
{
  int matriz[3][3] = {{1, 5, 6},
                      {5, 1, 8},
                      {6, 8, 1}};

  if (esSimetrica(matriz, 3))
  {
    cout << "Es simetrica" << endl;
  }
  else
  {
    cout << "No es simetrica" << endl;
  }

  return 0;
}
