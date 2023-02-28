#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function for binary search

// int binarysearch(int arr[], int size, int key)
// {

//   int start = 0;
//   int end = size-1;

//   int mid = (start + end) / 2;

//   while (start <= end)
//   {
//     if (arr[mid] == key)
//     {
//       return mid;
//     }
//     if (key > arr[mid])
//     {
//       start = mid + 1;
//     }
//     else
//     {
//       end = mid - 1;
//     }
//     mid = (start + end) / 2;
//   }
//   return -1;
// }

// // first occurence

// int firstocc(vector<int> arr, int target)
// {
//   int s = 0;
//   int e = arr.size() - 1;

//   int mid = s + (e - s) / 2;

//   int ans = -1;

//   while (s <= e)
//   {
//     if (arr[mid] == target)
//     {
//       ans = mid;
//       e = mid - 1;
//     }
//     else if (target > arr[mid])
//     {
//       s = mid + 1;
//     }
//     else if (target < arr[mid])
//     {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2; // update mid store last ans
//   }
//   return ans; // not return 0 return ans or etc which you declare variable
// }

// find last occurence

// int lastocc(vector<int> arr, int target)
// {
//   int s = 0;
//   int e = arr.size() - 1;

//   int mid = s + (e - s) / 2;

//   int ans = -1;

//   while (s <= e)
//   {
//     if (arr[mid] == target)
//     {
//       ans = mid;
//       s = mid + 1;
//     }
//     else if (target > arr[mid])
//     {
//       s = mid + 1;
//     }
//     else if (arr[mid] > target)
//     {
//       e = mid - 1;
//     }
//     mid = s + (e - s) / 2; // update mid store last ans
//   }
//   return ans; // not return 0 return ans or etc which you declare variable
// }

//  find missing number

// Function to get the missing number
// int MissingNumber(int a[], int n)
// {

//     int total = (n) * (n +1)/ 2;
//     for (int i = 0; i < n; i++)
//         total = a[i];
//     return total;
// }

int main()
{
  // binary search

  // int arr[11] = {1,2,3,4,5,6,3, 8, 11, 14, 16};
  // // int odd[5] = {};

  // int size=11;
  // int key=16;

  // int index = binarysearch(arr, 11, 16);

  // if(index==-1){
  //   cout<<"target not found"<<endl;
  // }
  // else{
  //   cout<<"target found at"<<index<<"index"<<endl;
  // }
  // cout << "index of 16 is " << index << endl;

  // return 0;

  // int v=
  // vector<int> v{1,2,3,4,5,6};

  // if(binary.search(v.begin(),v.end(),5)){
  //   cout<<"found"<<endl;
  // }
  // else{
  //   cout<<"not found"<<endl;

  // //      find first occurence

  // vector<int> v{1, 1, 1, 1, 1, 1, 3, 4, 4, 4, 4, 4, 6, 7, 7, 7, 7, 7, 7};
  // // int target =4;

  // int ans = firstocc(v, 4);

  // cout << "ans is " << ans << endl;

  // return 0;

  /* there is one consept upper bound ans lower bound
   for find low and high value  */

  /*std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  up= std::upper_bound (v.begin(), v.end(), 20); // */

  //      find and last occurence

  // vector<int> v{1, 1, 1, 1, 1, 1, 3, 4, 4, 4, 4, 4, 6, 7, 7, 7, 7, 7, 7};
  // // int target =4;

  // int ans = lastocc(v, 4);

  // cout << "ans is " << ans << endl;

  // return 0;

  //  find missing number

  // code wrong

  // int a[4]={1,2,3,5};
  // int b[5]={1,2,3,4,5};

  // int c=a^b;
  // // int getmissingnumber(arr,size,c);

  // cout<<"missing number is "<<c<<endl;

  //  find missing number

  // home work given
}
