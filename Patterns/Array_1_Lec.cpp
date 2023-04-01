#include<iostream>
#include<limits.h>
#include<cstring>

// using namespace std;

// bool find(int arr[],int size,int key){

  // linear search in Array


//   for(int i=0; i<size;i++){
//   if(arr[i]==key)
//   return true;
// }
// return false;
// }

int main(){

// int arr[5]= {1,3,5,7,8};
// int size=5;
// cout<<"Enter the key to find"<<endl;

// int key;
// cin>>key;

// if(find(arr,size,key)){
//   cout<<"Found"<<endl;
// }
// else{
//   cout<<"Not Found";
// }



// array initialized

  // int arr[]={1,2,3,4,5,6};
  // int crr[6]={1,2,3,4,5,6};
  // int brr[10]={1,2,3,12,8,6};

// error 
  // int drr[5]={1,2,3,4,5,6};  // error because element's
  // are 6 and in arr declared 5

  // char eerr[10]={'a','b','c','d','e'};
  // cout<<"\n"<<eerr[2]<<endl;

  // // printing all values
  // for(char index=0; index<5;index++){  // why index=0 , we can take i,j,k, etc so it is name.
  //   cout<<eerr[index]<<" "<<endl;
  // }

  // cout<<"\nArray initialized successfully \n"<<endl;


  // taking input 

  // int arr[10]={1,2,3,12,8,6};


  // memset   // wrong code

  // int arr[10];
  // memset(arr,1,sizeof(arr));

  // for(int i=0; i<10; i++){
  //   cout<<arr[i]<<" ";
  // }
  
        // count 0's and 1's

// int arr[]={0,1,0,1,0,1,0,1,0,1};
// int size=10;

// int numzero=0;
// int numone=0;

// for(int i=0; i<size;i++){
//   if(arr[i]==0){
//   numzero++;
// }
// if(arr[i]==1){
//   numone++;
// }
// }
// cout<<"numer of zeros :"<<numzero<<endl;
// cout<<"number of ones :"<<numone<<endl;


        //  find maximum number by using linear search in array


// int arr[]={1,2,3,4,6,8,10,16,25,35,45,55};
// int size=12;

// // initialise the maxi variable with the 
// // minimum possible integer value

// int maxi =INT_MIN;
// for(int i=0;i<size;i++){
//   if(arr[i]>maxi){
//     // found a number greater than
//     //  maxi and update maxi
//     maxi=arr[i];
//   }
// }
// cout<<"maximum number is :"<<maxi<<endl;



      // Array reverse

// int arr[]={1,2,3,4,6,8,10,16,25,35,45,55};
// int size=12;

// int start=0;
// int end=size-1;

// while(start<=end){
//   // step 1
//   swap(arr[start],arr[end]);
//   // step 2
//   start++;
//   // step 3
//   end--;
// }
// // printing array
// for(int i=0; i<size;i++){
//   cout<<arr[i]<<" ";
// }

}
