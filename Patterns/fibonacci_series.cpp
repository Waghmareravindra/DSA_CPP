#include <iostream>
using namespace std;

int main()
{
  int n, x, y, z;
  cout << "Enter Max Term: ";
  cin >> n;
  x = 0;
  y = 1;
  z = 0;
  while (z <= n)
  {
    x = y;
    y = z;
    z = x + y;
    cout << z;
  }
  return 0;
}