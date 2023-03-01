#include<iostream>
#include<vector>

using namespace std;

int findsqrt(int n){

  int s=0;
  int e=n;
  int mid= s+(e-s)/2;
  int ans=-1;
  int target =n;
 

  while(s<=e){
    if(mid*mid == target)
    return mid;

    if(mid*mid >target){
    e=mid-1;
  }
  else {
  ans=mid;

  s=mid+1;
}
mid=s+(e-s)/2;
}
return ans;
}


int main(){

// find sqrt in integer not in float

int n;
cout<<"Enter the number "<<endl;
cin>>n;

int ans = findsqrt(n);

cout<<"Ans is "<<ans<<endl;


return 0;



// find sqrt in float numbers using binary search 

// int n;
// cout<<"Enter the number "<<endl;
// cin>>n;

// int ans = findsqrt(n);

// cout<<"Ans is "<<ans<<endl;

// int precision;
// cout<<"Enter number of floating digits in precision "<<endl; // how much number you want to print in float 
// cin>>precision;

// double step =0.1;
// double finalans=ans;
// for(int i=0; i<precision; i++){
//   for(double j=finalans; j*j<=n; j=j+step){
//     finalans=j;
//   }
//   step =step/10;
// }
// cout<<"Final ans is "<<finalans<<endl;

// return 0;

}