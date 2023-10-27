#include <iostream>
using namespace std;

int billetesMonedas(int cantidad)
{
  int billetes = 0;
  while (cantidad >= 500)
  {
    cantidad = cantidad - 500;
    billetes++;
  }
  while (cantidad >= 200)
  {
    cantidad = cantidad - 200;
    billetes++;
  }
  while (cantidad >= 100)
  {
    cantidad = cantidad - 100;
    billetes++;
  }
  while (cantidad >= 50)
  {
    cantidad = cantidad - 50;
    billetes++;
  }
  while (cantidad >= 20)
  {
    cantidad = cantidad - 20;
    billetes++;
  }
  while (cantidad >= 10)
  {
    cantidad = cantidad - 10;
    billetes++;
  }
  while (cantidad >= 5)
  {
    cantidad = cantidad - 5;
    billetes++;
  }
  while (cantidad >= 1)
  {
    cantidad = cantidad - 1;
    billetes++;
  }
  cout << billetes << endl;
}

int main()
{
  billetesMonedas(800);

  return 0;
}
