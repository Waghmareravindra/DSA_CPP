// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

// //  search in rotated sorted array



// }



#include<iostream>
#include<vector>

using namespace std;

int findsqrt(int n){

  int s=0;
  int e=n;

  int mid=s+(e-s)/2;

  int target=n;
  int ans=-1;

  while(s<=e){
    if(mid*mid==target){
      return mid;
    }
    if(mid*mid>target){
      e=mid-1;
    }
    else{
      ans=mid;
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}


int main(){


  int n;
  cout<<"Enter the number";
  cin>>n;

  int ans=findsqrt(n);
  cout<<"Ans is "<<ans<<endl;

  return 0;
}