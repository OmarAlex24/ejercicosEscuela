// Intercambiar filas (Yo puse que se intercambien todas, no solo primera y ultima)

#include <iostream>
using namespace std;
void imprimiArr(int arr[][3], int fila, int col)
{

  for (int i = 0; i < fila; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void cambiarFilas(int matriz[][3], int nF, int nC)
{
  int x = nF;
  for (int i = 0; i < nF / 2; i++)
  {
    x -= 1;

    for (int j = 0; j < nC; j++)
    {
      int aux = matriz[i][j];

      matriz[i][j] = matriz[x][j];
      matriz[x][j] = aux;
    }
  }
}

int main()
{
  int matriz[5][3] = {{1, 5, 6},
                      {5, 1, 8},
                      {6, 8, 1},
                      {4, 5, 1},
                      {11, 29, 33}};

  cambiarFilas(matriz, 5, 3);
  imprimiArr(matriz, 5, 3);
  return 0;
}
