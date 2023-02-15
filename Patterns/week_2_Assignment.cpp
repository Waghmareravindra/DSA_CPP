
// Week 2 Assignment

#include<iostream>
using namespace std;

int main(){


  //  numeric half hallow pyramid
  int n;
  cin>>n;
  // for(int row=0; row<n; row++){
  //   for(int col=0; col<row+1; col++){
  //     if(col==0 || col==row || row==n-1){
  //       cout<<col+1;
  //     }
  //     else{
  //     cout<<" ";
  //   }
  //   }
  //   cout<<endl;
  // }

  // inverted numeric half hallow pyramid 

  // for(int row=0; row<n; row++){
  //   for(int col=row+1; col<=n;col++){
  //     if(row==0||col==row+1||col==n){
  //       cout<<col;
  //     }
  //     else{
  //    cout<<"*";
  //    }
  //   }
  //     cout<<endl;
  // }

  // pallindrome

  //   wrong code running infinite

  // int k=n;
  // for(int i=0; i<n; i++){
  //   int c=1;
  //   for(int j=0;j<k;j++){
  //     if(j<n-i-1){
  //       cout<<" ";
  //     }
  //     else if(j<=n-1){
  //       cout<<c;
  //       c++;
  //     }
  //     else if(j==n){
  //       c=c-2;
  //       cout<<c;
  //       c--;
  //     }
  //     else{
  //       cout<<c;
  //       c--;
  //     }
  //   }
  //     k++;
  //   cout<<endl;


  // }



// solid half diamond


// for(int row=0; row<n; row++){
//   for(int col=0; col<row+1; col++){
//     cout<<"*";
//   }
//   cout<<endl;
// }


// for(int row=0; row<n; row++){
//   for(int col=0; col<n-row-1; col++){
//     cout<<"*";
//   }
//   cout<<endl;
// }


// fancy pattern 1

for(int row=0; row<5; row++){
  for(int col=0; col<n; col++){
    cout<<"*";
  }

  // for(int col=0; col<n; col++){
    // cout<<row+1;
  // }
  cout<<endl;
}




// }
