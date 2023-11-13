#include <iostream>
#include <string>

using namespace std;
string ultimaP(string cadena) {
  int n = cadena.length();
  string resCad = "";

  while (n >= 0 && cadena[n] != ' ') {
    resCad = cadena[n] + resCad;
    n--;
  }
  return resCad;
}
int main() {
  cout << ultimaP("Hola") << endl;

  return 0;
}