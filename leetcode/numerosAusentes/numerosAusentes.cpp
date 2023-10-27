#include <iostream>
#include <stack>
using namespace std;

void leerArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Ingresa el digito " << i << ":";
    cin >> arr[i];
  }
}

stack<int> numerosAusentes(long long arr[], long long n)
{
  stack<int> mystack;
  for (int i = 0; i < n; i++)
  {
    bool encontrado = false;
    long long numBuscar = 1;

    while (!encontrado && numBuscar <= n)
    {
      if (arr[i] == numBuscar)
      {
        encontrado = true;
      }
      numBuscar++;
    }

    if (!encontrado)
    {
      mystack.push(numBuscar);
    }
  }
  return mystack;
}

int main()
{
  // Example 1:

  // Input: nums = [4,3,2,7,8,2,3,1]
  // Output: [5,6]
  long long nums[8] = {4, 3, 2, 7, 8, 2, 3, 1};

  cout << numerosAusentes(nums, 8);

  // Example 2:

  // Input: nums = [1,1]
  // Output: [2]

  long long nums2[2] = {1, 1};

  numerosAusentes(nums2, 2);

  return 0;
}
