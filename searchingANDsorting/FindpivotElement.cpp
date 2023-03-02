#include<iostream>
#include<vector>

using namespace std;


// find pivot element---------------------

int findpivot(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }
    if(mid <= e && arr[mid] > arr[mid+1])
      return mid;
    if(mid-1 >= s && arr[mid-1] > arr[mid])
      return mid-1;

    if(arr[s] > arr[mid]) 
      e = mid - 1;
    else
      s = mid + 1;

    mid = s + (e-s)/2;

  }
  return -1;
}

int main(){

  // find pivot element in array----------------

 vector<int> arr{1,2,3,4,5,6,7,8,9,0,15};
 int ans = findpivot(arr);

 cout<<"pivot element is "<<arr[ans]<<endl;
 cout<<"pivot element index is "<<ans<<endl;
 return 0;




}