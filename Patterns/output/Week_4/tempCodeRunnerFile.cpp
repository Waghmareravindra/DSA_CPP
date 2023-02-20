#include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// //  find first occurenc en array
// int firstocc(vector<int> arr, int target){
//   int s=0;
//   int e= arr.size()-1;
//   int mid=s+(e-s)/2;
//   int ans=-1;

//   while(s<=e){
//     if(arr[mid]==target){
//       // ans store
//       ans=mid;
//       // left search
//       e=mid-1;
//     }
//     else if(target>arr[mid]){
//       // right search

//       s=mid+1;
//     }
//     mid=s+(e-s)/2;
//   }
//   return ans;
// }