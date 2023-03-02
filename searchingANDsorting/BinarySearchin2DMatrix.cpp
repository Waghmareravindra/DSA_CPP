#include<iostream>
#include<vector>

using namespace std;

// binary searching using 2D matrix     target found 


// bool binarysearch(int arr[][4], int row, int col, int target){

//   int s=0;
//   int totalsize= row*col;
//   int e=totalsize-1;
//   int mid=s+(e-s)/2;

//   while(s<=e){
//     int rowindex=mid/col;
//     int colindex=mid%col;

//     if(arr[rowindex][colindex]==target){
//       cout<<"found at "<<rowindex<<" "<<colindex<<endl;
//       return true; 
//       }
//       if(arr[rowindex][colindex]<target){
//         s=mid+1;
//     }
//     else{
//       e=mid-1;
//     }
//     mid=s+(e-s)/2;
//   }
//   return false;

// }

// int main(){

//   int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

//   int row=5;
//   int col=4;

//   int target=19 ;

//   bool ans=binarysearch(arr,5,4,target);

//   // cout<<"index of 19 is "<<ans<<endl;

//   if(ans){
//     cout<<"Ans is found"<<endl;
//   }

//   else{
//     cout<<"Ans is Not found"<<endl;
//   }

//   return 0;
// }



// binary searching using 2D matrix      target not found 


bool binarysearch(int arr[][4], int row, int col, int target){

  int s=0;
  int e=row*col-1;
  int mid=s+(e-s)/2;
  
  while(s<=e){
    int rowindex=mid/col;
    int colindex=mid%col;

    if(arr[rowindex][colindex]==target){
      cout<<"found at "<<rowindex<<" "<<colindex<<endl;
      return true;
    }
    if(arr[rowindex][colindex]>target){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return false;
}



int main(){


  int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

  int row=5;
  int col=4;

  int target=122;

  int ans=binarysearch(arr,row,col,target);

  if(ans){
    cout<<"target found";
  }

  else{
    cout<<"target not found";
  }

  return 0;

}