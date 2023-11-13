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

int edadEst(estudiante e, fecha fa) {
  int edad = fa.a - e.fecha_nac.a;

  if (fa.m < e.fecha_nac.m) {
    edad--;
  } else if (fa.m == e.fecha_nac.m && fa.d < e.fecha_nac.d) {
    edad--;
  }

  return edad;
}

int main() {
  estudiante e;
  e.fecha_nac.a = 2004;
  e.fecha_nac.m = 9;
  e.fecha_nac.d = 24;

  fecha fechaActual;
  fechaActual.a = 2023;
  fechaActual.m = 11;
  fechaActual.d = 13;

  cout << "Tiene " << edadEst(e, fechaActual) << " años" << endl;
  return 0;
}
