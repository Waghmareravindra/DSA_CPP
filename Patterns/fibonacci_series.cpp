#include <iostream>
using namespace std;

int main()
{
  int n, x, y, z;
  //  fibonacci number upto n numbers Using for loop

  // cout << "enter the number: ";
  // cin >> n;
  // x = 0;
  // y = 1;
  // for (z = 0; z <= n; z = x + y)
  // {
  //   cout << z;
  //   x = y;
  //   y = z;
  // }
  // return 0;
  cout<<"Enter the no: ";
  cin>>n;

  x=0;
  y=1;
  z=0;

  while(z<=n){
    cout<<z;
    x=y;
    y=z;
    z=x+y;
  }
  return 0;
}