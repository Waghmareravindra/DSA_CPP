#include<iostream>
using namespace std;

void solve(int arr[]){
cout<<"size of inside solve function is -->  "<<sizeof(arr);

    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;   
    arr[0]=50;
    cout<<endl;
}

void update(int *p) {
        cout << "Address stored inside p is: " << p << endl;
        cout << "Address of p  is:" << &p << endl;
        *p = *p + 10;
}

int main(){

  // int arr[4]={11,12,13,14};
// // arr,&arr,&arr[0] all three are give base address
//   cout<<arr<<endl;
//   cout<<arr[0]<<endl;
//   cout<<&arr<<endl;
//   cout<<&arr[0]<<endl;


// int *p=arr;
// cout<<p<<endl;
// cout<<&p<<endl;
// return 0; 


// int arr[20]={11,12,1,19,13,14,15,16,17,1,1};

// cout<<*arr<<endl;
// cout<<arr[0]<<endl;

// cout<<*arr+1<<endl;
// cout<<*(arr)+1<<endl;

// cout<<*(arr+1)<<endl;
// cout<<arr[1]<<endl;

// cout<<*(arr+2)<<endl;
// cout<<arr[2]<<endl;

// cout<<*(arr+3)<<endl;
// cout<<arr[3]<<endl;

// int drr[2]={1,2};
// cout<<drr[1]<<endl;


// int i=5;// which is index number
// cout<<arr[i]<<endl;
// cout<<i[arr]<<endl;
// cout<<*(arr+i)<<endl;
// cout<<*(i+arr)<<endl;



// int arr[10]={10,12,13,14,15,16};

// cout<<sizeof(arr)<<endl;

// int *p=arr;
// cout<<sizeof(p);

// cout<<arr+1;
// int *p=arr+1;



// //  CHAR ARRAY

// char ch[10]="ravindra";
// char *c=ch;

// cout<<ch<<endl;
// cout<<&ch<<endl;
// cout<<ch[0]<<endl;
// cout<<&c<<endl;
// cout<<*(c+3)<<endl;
// cout<<c+2<<endl;
// cout<<*c<<endl;
// cout<<c+7<<endl;

// char ch='k';
// char* cptr =&ch;

// cout<<cptr<<endl;


// int arr[10]={1,2,3,4};
// cout<<"size inside main function is--> "<<sizeof(arr)<<endl;

// cout<<arr<<endl;
// cout<<&arr<<endl;
// // printing array inside main

// for(int i=0; i<10; i++){
//   cout<<arr[i]<<" ";
// }
// cout<<endl;
// cout<<endl<<endl<<"Now calling solve function"<<endl;

// solve(arr);

// cout<<"Wapas main function me aagye h "<<endl;

// for(int i=0; i<10; i++){
//   cout<<arr[i]<<" ";
// }



  int a = 5;
        cout << "Address of a is: " << &a << endl;
        int* ptr = &a;
        cout << "address stored in ptr is: " << ptr << endl;
        cout << "Address of ptr is: " << &ptr << endl;
        update(ptr);
        cout<<"value of a is: " << a << endl;
return 0;

}