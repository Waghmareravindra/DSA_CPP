
#include <iostream>
using namespace std;

int main()
{

  // int n=5;

  // for(int row=0;row<n; row++){
  //   for(int col=0;col<n-row; col++){
  //     cout<<" ";
  //   }
  //   for(int col=0; col<row+1; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
//  spaces
  for(int row=0; row<4; row++){
    for(int col=0; col<4-row-1; col++){
      cout<<"  ";
    }
// numbers
for(int col=0; col<row+1; col++){
   cout<<row+col+1<<" ";
   }
    // reverse
    int start =2*row;
    for(int col=0; col<row; col++){
      cout<< start<<" ";
      start--;
    }
    cout<< endl;
  }
}