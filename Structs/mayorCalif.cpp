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

int mayorCalif(estudiante arr[], int n){
	int mayor = arr[0].calificacion;

	for(int i = 1; i < n-1; i++){
		if(arr[i].calificacion > mayor){
			mayor = arr[i].calificacion;
		}
	}
	return mayor;
}

int main(){
	estudiante arrEstudiante[4];

	arrEstudiante[0].calificacion = 8;
	arrEstudiante[1].calificacion = 10;
	arrEstudiante[2].calificacion = 4;
	arrEstudiante[3].calificacion = 7;

	cout <<	mayorCalif(arrEstudiante, 4);

	return 0;
}

