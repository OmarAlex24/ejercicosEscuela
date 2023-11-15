#include <iostream>
#include <string>

using namespace std;

struct fecha {
  int d;
  int m;
  int a;
};

struct estudiante {
  string matricula;
  string nombre;
  int calificacion;
  fecha fecha_nac;
};

int lcad(string cadena) {
  int i = 0;
  while (cadena[i] != '\0') {
    i++;
  }
  return i;
}

string inicialEst(estudiante estudiantes) {
  int n = lcad(estudiantes.nombre);
  string cad;
  cad = estudiantes.nombre[0];

  for (int i = 1; i < n; i++) {
    if (estudiantes.nombre[i] == ' ') {
      cad += estudiantes.nombre[i + 1];
    }
  }
  return cad;
}

int main() {
  estudiante Omar;
  Omar.nombre = "Omar Alexandro Espinosa Fernandez";

  cout << inicialEst(Omar) << endl;

  return 0;
}
