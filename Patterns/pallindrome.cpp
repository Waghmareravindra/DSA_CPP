#include <iostream>
using namespace std;

int main()
{
  int n, i, sum = 0, temp;
  cout << "enter  the number: ";
  cin >> n;

  temp = n;
  while (n > 0)
  {
    i = n % 10;
    sum = (sum * 10) + i;
    n = n / 10;
  }
  if (temp == sum)
  {
    cout << "palindrome";
  }
  else
  {
    cout << "not palindrome";
  }
  return 0;
}