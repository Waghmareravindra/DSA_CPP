#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//  find first occurenc en array
int firstocc(vector<int> arr, int target){
  int s=0;
  int e= arr.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e){
    if(arr[mid]==target){
      // ans store
      ans=mid;
      // left search
      e=mid-1;
    }
    else if(target>arr[mid]){
      // right search

      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
int main(){


//  Binary Search Using Pre defined second method see screen shot or repeat video

// vector<int> v{1,2,3,4,5,6};

// if(binary_search(v.begin(),v.end(),30)){
//   cout<<"found"<<endl;
// }
// else{
//   cout<<"not found"<<endl;
// }

// return 0;


// Using Array find binary search

// int arr[]={1,2,3,4,5,6,7};
// int size =7;

// if(binary_search(arr,arr+size,30)){
//   cout<<"found"<<endl;
// }
// else{
//   cout<<"not found"<<endl;
// }

// return 0;

//  find first occurence in array

vector<int> v{1,3,3,3,3,3,4,4,4,4,4,6,7};

int target=4;

int ans =firstocc(v,target);
cout<<"ans is"<<ans<<endl;   

return 0;


// if(binary_search(arr,arr+size,30)){
//   cout<<"found"<<endl;
// }
// else{
//   cout<<"not found"<<endl;
// }

// return 0;



// Main.cpp week 4 lec_12

#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target) {
  int s = 0;
  int e = rows*cols - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    int rowIndex = mid/cols;
    int colIndex = mid%cols;
    
    if(arr[rowIndex][colIndex] == target) {
      cout << "Found at " << rowIndex <<" " << colIndex << endl;
      return true;
    }

    if(arr[rowIndex][colIndex] < target) {
      s = mid +1;
    }
    else {
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return false;
}

int main() {
  int arr[5][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
  int rows = 5;
  int cols = 4;

  int target = 99;

  bool ans = binarySearch(arr,rows,cols, target);

  if(ans) {
    cout << "Found " << endl;
  }
  else {
    cout << "not Found" << endl;
  }




  return 0;
}

}