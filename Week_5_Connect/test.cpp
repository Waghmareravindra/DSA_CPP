#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

//  // function 
bool cmp(int x, int y){
  cout<<"first number is "<<x;
  cout<<" second number is "<<y<<endl;
  return x>y;
}

int main(){
  vector<int> v{4,5,6,7,8,9,10,14,19,52,64,18,26,35};
  sort(v.begin(),v.end(),cmp);
  for(auto i:v){
    cout<<i<<" ";
  }
  cout<<endl;
  
}