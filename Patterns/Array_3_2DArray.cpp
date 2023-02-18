#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;


// funtion creted  declared printsumwisesum

// Function  for row wise Sum

// void printrowwisesum(int arr[][3],int row, int col){ // arr[we can save empty][remaining should store no of rows]

//   cout<<"printing row wise sum"<<endl;
//   for(int  i=0; i<row; i++){
//     int sum=0;
//     for(int j=0; j<col; j++){
//       sum=sum+arr[i][j];
//     }
//     cout<<sum<<endl;
//   }
// }

// Function for column wise Sum

// void printcolumnwisesum(int arr[][3],int row, int col){ // arr[we can save empty][remaining should store no of rows]

//   cout<<"printing column wise sum"<<endl;
//   for(int  i=0; i<row; i++){
//     int sum=0;
//     for(int j=0; j<col; j++){
//       sum=sum+arr[j][i];
//     }
//     cout<<sum<<endl;
//   }
// }


// Linear Search in 2D array ------------------


// bool findkey(int arr[][3],int row, int col, int key){
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       if(arr[i][j]==key)
//         return true;
//       }
     
//     }
//     return false;
    
//   }


// Miximum Number in 2D array

// int getmax(int arr[][3],int row, int col){
//   int maxi=INT_MIN;
//   for(int i=0; i<row;i++){
//     for(int j=0; j<col; j++){
//       if(arr[i][j]>maxi){
//         maxi=arr[i][j];
//       }
//     }
//   }
//     return maxi;
// }



// Minimum Number in 2D array

// int getmin(int arr[][3],int row, int col){
//   int mini=INT_MAX;
//   for(int i=0; i<row;i++){
//     for(int j=0; j<col; j++){
//       if(arr[i][j]<mini){
//         mini=arr[i][j];
//       }
//     }
//   }
//     return mini;
// }
int main(){

// Declare Array
// int arr[3][3];

// initialise

// int brr[3][3]={{1,2,3},{4,5,6},{2,4,8}};

// cout<<brr[2][1]<<endl;

// return 0;

    // row wise print

// outer loop
  // for(int i=0; i<3;i++){
  //   // inner loop
  //   for(int j=0; j<3;j++){
  //     cout<<brr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // column wise print

// cout<<"printing column wise"<<endl<<endl;
// // outer loop
//   for(int i=0; i<3;i++){
//     // inner loop
//     for(int j=0; j<3;j++){
//       cout<<brr[j][i]<<" ";
//     }
//     cout<<endl;
//   }

      // Row wise input 

// int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[i][j];
//   }
// }
// cout<<"printing row wise"<<endl;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col;j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }

    // column wise input

//   int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[j][i];
//   }
// }
// cout<<"printing column wise"<<endl;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col;j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }
//  return 0;



//Print row wise sum -------------------

//   int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[j][i];
//   }
// }
// cout<<"printing column wise"<<endl;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col;j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }
// // function created and called

// printrowwisesum(arr,row,col); // function call

//  return 0;



            // Print column wise sum ------------------

//   int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[i][j];
//   }
// }
// cout<<"printing column wise"<<endl;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col;j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }
// // function created and called

// printcolumnwisesum(arr,row,col); // function call

//  return 0;



// Linear Search in 2D array ------------------

//   int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// int key;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[i][j];
//   }
// }
// cout<<"printing column wise"<<endl;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col;j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }
// function created and called
// int key= 12;

//  for print true or false in numbers 0 and 1  

// cout<<findkey(arr,3,3,12);

//  for print true or false in words 

// if(findkey(arr,3,3,12)){
//   cout<<"True";
// }
// else{
//   cout<<"False";
// }
//  return 0;


// Maximum Number in 2 D Array ------------------

//   int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// int key;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[i][j];
//   }
// }
// cout<<"printing column wise"<<endl;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col;j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }

// cout<<endl<<"Maximum number in array is :";
// cout<<getmax(arr,row,col)<<endl;

//  return 0;



              // Minimum Number in 2 D array

//   int arr[3][3];
// // cin>> arr[][];
// int row =3;
// int col=3;
// int key;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[i][j];
//   }
//   cout<<endl;
// }


// cout<<endl<<"Minimum number in array is :";
// cout<<getmin(arr,row,col)<<endl;

//  return 0; 

           // Vector of vector ----------

// vector<vector<int> >arr;
// vector<int> a{1,2,3};
// vector<int> b{4,5,6};
// vector<int> c{7,8,9};

// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// for(int i=0;i<arr.size();i++){
//   for(int j=0;j<arr[0].size();j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }
// return 0;


      vector hard level

      int row=3;
      int col=5;

      vector<vector<int> >arr(row, vector<int>(col, 1));
      for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      return 0;

}
