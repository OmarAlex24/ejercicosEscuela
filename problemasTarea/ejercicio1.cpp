#include <iostream>
using namespace std;

int esIdentidad(int matriz[][3], int n)
{
  int i = 0;
  int bandera = 1;
  // Checar diagonal
  while (bandera && i < n)
  {
    if (matriz[i][i] != 1)
    {
      bandera = 0;
    }
    i++;
  }

  i = 0;

  // Checo todo lo demas
  while (bandera && i < n - 1)
  {
    int j = i + 1;
    while (bandera && j < n)
    {
      if (matriz[i][j] != 0 || matriz[j][i] != 0)
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
  int matriz[3][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 1}};

  if (esIdentidad(matriz, 3))
  {
    cout << "Es identidad" << endl;
  }
  else
  {
    cout << "No es identidad" << endl;
  }

  return 0;
}
