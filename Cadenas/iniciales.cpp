#include <iostream>
#include <string>

using namespace std;
string iniciales(string cadena) {
  string iniciales = "";
  int i = 0;

  while (cadena[i] != '\0') {
    if (i == 0 || cadena[i - 1] == ' ') {
      iniciales += cadena[i];
    }
    i++;
  }
  return iniciales;
}
int main() {
  cout << iniciales("Omar Alexandro Espinosa Fernandez") << endl;

  return 0;
}