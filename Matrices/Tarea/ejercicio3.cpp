// Intercambiar filas (Yo puse que se intercambien todas, no solo primera y ultima)

#include <iostream>
using namespace std;
void imprimiArr(int arr[][3], int largo)
{

  for (int i = 0; i < largo; i++)
  {
    for (int j = 0; j < largo; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void cambiarFilas(int matriz[][3], int n)
{
  int x = n;
  for (int i = 0; i < n / 2; i++)
  {
    x -= 1;

    for (int j = 0; j < n; j++)
    {
      int aux = matriz[i][j];

      matriz[i][j] = matriz[x][j];
      matriz[x][j] = aux;
    }
  }
}

int main()
{
  int matriz[3][3] = {{1, 5, 6},
                      {5, 1, 8},
                      {6, 8, 1}};

  cambiarFilas(matriz, 3);
  imprimiArr(matriz, 3);
  return 0;
}
