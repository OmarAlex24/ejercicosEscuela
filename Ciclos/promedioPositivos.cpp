#include <iostream>
using namespace std;

int main()
{
  float sum = 0;
  float nApr = 0;
  int calif;
  float prom;

  cin >> calif;

  while (calif >= 0)
  {
    if (calif >= 6)
    {
      sum += calif;
      nApr++;
    }
    cin >> calif;
  }
  prom = sum / nApr;
  cout << prom;
  return 0;
}
