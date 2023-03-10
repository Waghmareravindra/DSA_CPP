#include <iostream>
using namespace std;

int main()
{

  // int a = 5;
  // int b = 5;

  // cout << a << endl;
  // cout << &a << endl;
  // cout << b << endl;
  // cout << &b << endl;

    int a=5;
    // pointer create
    int *ptr=&a;


  // access the value ptr is pointing to

  cout<<"address of a is "<<&a<<endl; // address of a
  cout<<"value ptr is pointing to is "<<*ptr<<endl;  // value access not address
  cout<<"value stored at ptr is "<<ptr<<endl;  // access of address of value
  cout<<"address of ptr is "<<&ptr<<endl;





}