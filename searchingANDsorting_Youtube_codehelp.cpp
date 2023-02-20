#include<iostream>
#include<vector>
#include<algorithm>

int using namespace std;

int binaryseacrh(int arr,int size, int target){
  int start=0;
  int end=size-1;

  int mid=start+(end-start)/2;

  while(start<=end){
    if(arr[mid]==target){
      return mid;
    }
    if(arr[mid]<target){
      start =mid+1;
    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return 0;
}

int main(){

  int even[10]={2,4,6,8,10,12,14,16,18,20};
  int odd[5]={1,2,3,4,5};

  int search=binarysearch(even,10,25);
  cout<<"index of 25 is "<<search;

}