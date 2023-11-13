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

void leerArr(estudiante a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Ingresa la matricula: ";
    cin >> a[i].matricula;

    cout << "Ingresa el nombre: ";
    cin >> a[i].nombre;

    cout << "Ingresa la calificacion: ";
    cin >> a[i].calificacion;

    cout << "Ingresa el dia de nacimiento: ";
    cin >> a[i].fecha_nac.d;
    cout << "Ingresa el mes de nacimiento: ";
    cin >> a[i].fecha_nac.m;
    cout << "Ingresa el año de nacimiento: ";
    cin >> a[i].fecha_nac.a;

    cout << endl;
  }
}
void imprimirArr(estudiante a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Matricula: " << a[i].matricula << endl;

    cout << "Nombre: " << a[i].nombre << endl;

    cout << "Calificacion: " << a[i].calificacion << endl;

    cout << "Dia de nacimiento: " << a[i].fecha_nac.d << endl;

    cout << "Mes de nacimiento: " << a[i].fecha_nac.m << endl;

    cout << "Año de nacimiento: " << a[i].fecha_nac.a << endl;

    cout << endl;
  }
}

int main() {
  estudiante salon[5];

  leerArr(salon, 5);
  imprimirArr(salon, 5);

  return 0;
}
