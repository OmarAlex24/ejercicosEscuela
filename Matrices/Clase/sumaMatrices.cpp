#include <iostream>

using namespace std;

void leerArr(int matrizA[][100], int matrizB[][100], int filaA, int filaB,
             int colA, int colB) {

  for (int i = 0; i < filaA; i++) {
    for (int j = 0; j < colA; j++) {
      cout << "Ingresa el valor de la primera matriz de la posicion " << i
           << " " << j << endl;
      cin >> matrizA[i][j];
    }
  }

  for (int i = 0; i < filaB; i++) {
    for (int j = 0; j < colB; j++) {
      cout << "Ingresa el valor de la segunda matriz de la posicion " << i
           << " " << j << endl;
      cin >> matrizB[i][j];
    }
  }
}
void imprimirArr(int matrizC[][100], int fila, int col) {
  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < col; j++) {
      cout << matrizC[i][j] << " ";
    }
    cout << endl;
  }
}

int sonIguales(int filaA, int filaB, int colA, int colB) {
  return (filaA == filaB && colA == colB);
}

void sumaMatrices(int matrizA[][100], int matrizB[][100], int matrizC[][100],
                  int nC, int nF) {
  for (int i = 0; i < nF; i++) {
    for (int j = 0; j < nC; j++) {
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
}

int main() {
  int matrizA[100][100], matrizB[100][100], matrizC[100][100];
  int filaA, filaB, colA, colB;

  cin >> filaA >> filaB >> colA >> colB;

  if (sonIguales(filaA, filaB, colA, colB)) {
    leerArr(matrizA, matrizB, filaA, filaB, colA, colB);
    sumaMatrices(matrizA, matrizB, matrizC, filaA, colA);
    imprimirArr(matrizC, filaA, colA);
  } else {
    cout << "No se puede" << endl;
  }

  return 0;
}