#include <iostream>
#include <string>

using namespace std;

struct empleado {
	string numeroP;
	string nombre;
	float salario;

	float calcularImpuesto(float porcentajeImp){
		return salario * porcentajeImp;
	}

};

float totalImpuestos(empleado empleados[], int nEmpleados, float cantImpuestos){
		int sumaImpuestos;

		for(int i = 0; i < nEmpleados; i++){
			if(empleados[i].salario > 1000){
				sumaImpuestos += empleados[i].calcularImpuesto(cantImpuestos);
			}
		}
		return sumaImpuestos;
}

int main(){
  empleado arrEmpleados[4];

  arrEmpleados[0].salario = 1000;
  arrEmpleados[1].salario = 1001;
  arrEmpleados[2].salario = 1089;
  arrEmpleados[3].salario = 100;

  cout << totalImpuestos(arrEmpleados, 4, .5) << endl;

  return 0;
}
