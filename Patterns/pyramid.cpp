#include<iostream>

using namespace std;

int main(){
  
 int n;
 cin>>n;
 for (int i=0; i<n; ++i) {
   int k=0;
     for (int j=0; j<n*2-1; ++j) {
         if(j<n-i-1){
             cout<<" ";
         }
         else if(k < 2*i+1){
             if(k==0 || k == 2*i || i == n - 1){
                 cout<<"*";
             }
             else{
                 cout<<"*";
             }
           k++;
         }
         else{
             cout<<" ";
         }
     }
     cout<<endl;
 }

int n;
cin>>n;
for(int row=0; row<n; row++ ){
  for(int col=0; col<n-row-1; col++){
    cout<<" ";
  }
  for(int col=0; col<row+1; col++){
    cout<<"* ";
  }
  cout<<endl;
}

for(int row=0; row<n; row++){

  for(int col=0; col<n-row-1; col++){
    cout<<" ";
  }
  for(int col=0; col<2*row+1; col++){
    if(col==0||col==2*row){
      cout<<"*";
    }
    else{
      cout<<" ";
    }
  }
   cout<<endl;
  }
}