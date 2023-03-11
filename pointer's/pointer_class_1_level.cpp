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

    // int a=5;
    // // pointer create
    // int *ptr=&a;


  // access the value ptr is pointing to

  // cout<<"address of a is "<<&a<<endl; // address of a
  // cout<<"value ptr is pointing to is "<<*ptr<<endl;  // value access not address
  // cout<<"value stored at ptr is "<<ptr<<endl;  // access of address of value
  // cout<<"address of ptr is "<<&ptr<<endl;


// //pointer alway's store address of value 

// find size of value it doesn't matter is it int or char or any other dat type it is 4 or 8 size of data type  

// int a=5;
// int *ptr=&a;

// cout<<sizeof(ptr)<<endl;


// char ch='c';
// char *dtr=&ch;

// cout<<sizeof(dtr)<<endl;

// double pointer=5.03;
// double *potr=&pointer;

// cout<<sizeof(potr)<<endl;


// // BAD PRACTICE
// int *ptr;

// cout<<*ptr<<endl;


//  NULL POINTER
// int *ptr=0;

// cout<<*ptr<<endl;

// --------------------------- //

// int a=5;
// int* ptr=&a;

// // copy pointer
// int* dusraptr=ptr;

// cout<<*ptr<<endl;
// cout<<*dusraptr<<endl;

// cout<<*dusraptr*2<<endl;
// cout<<*ptr*2<<endl;

int a=5;
int *p=&a;
int *q=p;
int *r=q;

cout<<a<<endl;
cout<<&a<<endl;
cout<<*p<<endl;
cout<<p<<endl;
cout<<&p<<endl;
cout<<r<<endl;
cout<<&r<<endl;
cout<<*r<<endl;
cout<<(*p/2)<<endl;
cout<<(*q/2)<<endl;
cout<<(*r/2)<<endl;
cout<<&r<<endl;


}