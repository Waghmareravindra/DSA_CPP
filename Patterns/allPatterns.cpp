 // #include<iostream>
// using namespace std;

// int main(){
// patterns---------------------------------------
//   int rowcount, colcount;
// cin >> rowcount;   //input enter by user
// cin >> colcount;  //input enter by user

//   for(int row=0; row<rowcount; row++){
// if(row==0 || row==rowcount-1){ /* rowcount -1 for calculate how many rows*/

//       for(int col=0; col<colcount; col++){
//         cout<<"*";
//       }
//     }
//     else{
//       cout<<"*";
//       for(int i=0; i<colcount-2; i++){
//         cout<<" ";
//       }
//       cout<<"*";
//     }
//       cout<<endl;

//   }
// half pyramid--------------------------------------------
// int n;
// cin>>n;
// for(int row=0; row<n;row++){
//   for(int col=0; col<row+1; col++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// inverted half pyramid-------------------------

// int n;
// cin>> n;

// for(int row=0; row<6; row++){
//   for(int col=0; col<n-row; col++){
//     cout<<"*";
//   }
//   cout<<endl;
// }
//   Numeric Half Pyramid -------------------------------
//   int n=5;
// for(int row=0; row<5; row++){
//   for(int col=0; col<row+1; col++){
//     cout<<col+1;
//   }
//   cout<<endl;
// }

// Inverted Numeric Half Pyramid -------------------------------
// int n;
// cin>>n;
// for(int row=0; row<n; row++){
//   for(int col=0; col<n-row; col++){
//     cout<<col+1;
//   }
//   cout<<endl;
// }
// for(int row=0; row<5; row++){
//   for(int col=0; col<5-row; col++){
//     cout<<" ";
//   }
//   for(int i=0; i<5; i++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }
// int a=10,b,c;
// b=a++; c=a;
// cout<<a<<""<<b<<c<<endl;
// int a=95/10;
//   cout<<a;   //  it will print 9 in integer it accept only int value not
//   float etc

// int a=(1,2,3);
//   cout<<a;

// }

//  Debug Exercise-------------------------------------

// #include<iostream>
// using namespace std;

// int main() {
// a)---------------------
// int i=0;
// i=i+1;
// cout<<i;
// /*print i \*/i=i+1
// cout<<++i;

// b)-------------------------
// short i=2300, j=4322;
// cout<<"i+j="<<(i+j);
// }

// // c)-------------------

// int main() {
// 	float l, b;
// 	float P = 2*(l+b);
// 	printf("Perimeter= %f", P);

// //  d)-----------------------------
// int row=6;
//   // cin>>n;
//   for (int i=0; i<row; ++i) {
//       for (int j=0; j<row; ++j) {
//           cout<<"* ";
//       }
//       cout<<endl;
//   }
// //  e)------------------------------
//   int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false;
//     break ;

//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;
// 	}
//   return 0;

// f)--------------------------------------------
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<=n;j++){
//         if(j==i+1 || j == n || i == 0){
//             cout<<j;
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

// g)----------------------------------
//   int n;
// std:: cin>>n;
// for (int i = 1; i <= n; i++) {
//   for (int j = 1; j <= n-i ; j++) {
//     printf("  ");
//   }
//   for (int j = i; j < 2*i; j++) {
//     printf("%d ", j);
//   }
//   int ele = 2 * (i-1);
//   for (int j = 1; j <= i-1 ; j++) {
//     printf("%d ", ele--);
//   }
//   printf("\n");
// }
// return 0;
// pyramid-------------------------
// int n;
//  cin>>n;
//  for (int i=0; i<n; ++i) {
//    int k=0;
//      for (int j=0; j<n*2-1; ++j) {
//          if(j<n-i-1){
//              cout<<" ";
//          }
//          else if(k < 2*i+1){
//              if(k==0 || k == 2*i || i == n - 1){
//                  cout<<"*";
//              }
//              else{
//                  cout<<"*";
//              }
//            k++;
//          }
//          else{
//              cout<<" ";
//          }
//      }
//      cout<<endl;
//  }

// int n;
// cin>>n;
// for(int row=0; row<n; row++ ){
//   for(int col=0; col<n-row-1; col++){
//     cout<<" ";
//   }
//   for(int col=0; col<row+1; col++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// for(int row=0; row<n; row++){

//   for(int col=0; col<n-row-1; col++){
//     cout<<" ";
//   }
//   for(int col=0; col<2*row+1; col++){
//     if(col==0||col==2*row){
//       cout<<"*";
//     }
//     else{
//       cout<<" ";
//     }
//   }
//    cout<<endl;
//   }
// int n;
//   cin>> n;

// ------------ solid rectangle---------
// for(int i=0; i<3; i++){
//   for(int j=0;j<6; j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// ---------- flliped solid pattern--------------------------------

// for(int row=0; row<n; row++){
//   // star
// for(int col=0; col<n-row; col++){
//   cout<<"*";
// }
//   // space
//   for(int col=0; col<2*row+1; col++){
//   cout<<" ";
//   }

//   // star5
//   for(int col=0; col<n-row; col++){
//     cout<<"*";
//   }
// cout<<endl;

// }

// for(int row=0; row<n; row++){
//   for(int col=0; col<row+1; col++){
//     cout<<"*";
//   }
//   for(int col=0; col<2*n-2*row-1; col++){
//     cout<<" ";
//   }
//   for(int col=0; col<row+1; col++){
//     cout<<"*";
//   }
// cout<<endl;
// }
// ------------- numerical full pyramid

// spaces
//   for(int row=0; row<n; row++){
//     for(int col=0; col<n-row-1; col++){
//       cout<<"  ";
//     }
// // numbers
// for(int col=0; col<row+1; col++){
//    cout<<row+col+1<<" ";
//    }
//     // reverse
//     int start =2*row;
//     for(int col=0; col<row; col++){
//       cout<< start<<" ";
//       start--;
//     }
//     cout<< endl;
//   }
// spaces
// for(int row=0; row<n; row++){
//   for(int col=0; col<n-row-1;col++){
//     cout<<"  ";

// }

// // numbers

// for(int col=0; col<row+1; col++){
//   cout<<row+col+1<<" ";
// }

//   // reverse counting
//   int start=2*row;
//   for(int col=0; col<row; col++){
//     cout<<start<<" ";
//     start--;
//   }
//   cout<<endl;
//   }

#include <iostream>
using namespace std;

int main() {

  cout<<"hello";
  cout<<"world";
  // -----------hollow rectangle-------------

  // for(int row=0; row<3; row++){
  //   if(row==0||row==2){
  //     for(int col=0;col<5;col++){
  //       cout<<"*";
  //     }
  //   }
  //   else{
  //     cout<<"*";
  //     for(int k=0; k<3; k++){
  //       cout<<" ";
  //     }
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // //  hollow rectangle----------- using
  // count---------------------------------------

  // int rowcount, colcount;
  // cin>> rowcount;
  // cin>>colcount;
  // for(int row=0; row<rowcount; row++){
  //   if(row==0||row==rowcount-1){
  //     for(int col=0; col<colcount;col++){
  //       cout<<"*";
  //     }
  //   }
  //   else{
  //     cout<<"*";
  //     for(int col=0; col<colcount-2; col++){
  //       cout<<" ";
  //     }
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // //  2nd Method for hollow rectangle------------------------

  // for(int row=0; row<6; row++){
  //   if(row==0||row==5){
  //     for(int col=0; col<8; col++){
  //       cout<<"*";
  //     }
  //   }
  //   else{
  //     cout<<"*";
  //     for(int col=0; col<6; col++){
  //       cout<<" ";
  //     }
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // // half pyramid

  // for(int row=0;row<6; row++){
  //   for(int col=0; col<row+1; col++){
  //     cout<<"*";
  //   }
  //  cout<<endl; }

  // inverted half pyramid

  // for(int row=0;row<6; row++){
  //   for(int col=0; col<6-row; col++){
  //     cout<<"*";
  //   }
  //  cout<<endl; }

  // numeric half pyramid

  // for(int row=0;row<6; row++){
  //   for(int col=0; col<row+1; col++){
  //     cout<<col+1;
  //   }
  //  cout<<endl; }

  // inverted numeric half pyramid

  // for(int row=0;row<6; row++){
  //  for(int col=0; col<6-row; col++){
  //    cout<<col+1;
  //  }
  // cout<<endl; }

  // full pyramid-----

  // for(int row=0; row<5; row++){
  //     for(int col=0;col<5-row; col++){
  //       cout<<" ";
  //     }
  //   for(int col=0;col<row+1; col++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  //   }

  // inverted full pyramid

  // for(int row=0; row<5; row++){
  //     for(int col=0;col<row+1; col++){
  //       cout<<" ";
  //     }
  //   for(int col=0;col<5-row; col++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  //   }

  // numerical full pyramid
  // space
  // for(int row=0; row<5; row++){
  //     for(int col=0;col<5-row; col++){
  //       cout<<"* ";
  //     }
  //   // numbers
  //   for(int col=0;col<row+1; col++){
  //     cout<<row+col+1<<" ";
  //   }
  //   // reverse
  //   for(int col=2; col<<4-; col++){
  //     cout<<row-1<<" ";
  //   }

  //   cout<<endl;
  //   }

  // solid diamond-----------

  // full pyramid-----

  // for(int row=0; row<5; row++){
  //     for(int col=0;col<5-row; col++){
  //       cout<<" ";
  //     }
  //   for(int col=0;col<row+1; col++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  //   }

  //   // inverted full pyramid

  // for(int row=0; row<5; row++){
  //     for(int col=0;col<row+1; col++){
  //       cout<<" ";
  //     }
  //   for(int col=0;col<5-row; col++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  //   }

  // hollow diamond-----------
  // int n;
  // cin >> n;


  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     if (col == 0 || col == 2 * row) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }

  //   cout << endl;
  // }

  // // inverted hollow diamond----something problem in this 

//   for (int row=0; row<n; row++) {
//     // spaces
//     for (int col=0; col<row; col++) {
//       cout << "$";
//     }
//     // star
//     for (int col=0; col<2*n-2*row-1; col++) {
//       // if first or last charachter
//       if (col==0 || col==2*n-2*row-2) {
//         cout << "*";
//       } 
//       else {
//         // middle spaces
//         cout << " ";
//       }
//     cout << endl;
    
//     }
// }
// flipped solid diamond ----------
  
  // for(int row=0; row<n; row++){
  //   for(int col=0;col<n-row; col++){
  //     cout<<"*";
  //   }
  // for(int col=0; col<2*row+1;col++){
  //   cout<<" ";
  // }
  //   for(int col=0; col<n-row; col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // // inverted flipped solid diamond 

  // for(int row=0; row<n; row++){
  //   for(int col=0;col<row+1; col++){
  //     cout<<"*";
  //   }
  // for(int col=0; col<2*n-2*row-1;col++){
  //   cout<<" ";
  // }
  //   for(int col=0; col<row+1; col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // fancy pattern
  
// for(int row=0; row<n; row++){
//     for(int col=0;col<row+1; col++){
//       cout<<row+1;
//       if(col!=row)
//         cout<<"*";
//     }
//   cout<<endl;
// }
// // fancy pattern inverted
  
//   for(int row=0; row<n; row++){
//     for(int col=0;col<n-row; col++){
//       cout<<n-row;
//       if(col!=n-row-1)
//         cout<<"*";
//     }
//   cout<<endl;
// }

  // Alphabet palindrome pyramid
  
  //  for(int row=0; row<n; row++){
     
  //   int col;
  //   for(int col=0;col<row+1; col++){
  //     int ans=col+1;
  //     char ch=ans+'A'-1;
  //       cout<<ch;
  //   }

  //     //Alphabet reverse counting print
  
  //   for(int col=row;col>=1; col--){
  //     int ans=col;
  //     char ch=ans+'A'-1;
  //       cout<<ch;
  //   }
  // cout<<endl;
  //    }

  // solid square
  
  // for(int row =0;row<n;row++){
  //   for(int col=0;col<n;col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  
// Hollow square--------------
  
// for(int row=0; row<6;row++){
  
//     if(row==0 || row==5){
//       for(int col=0; col<6; col++){
//       cout<<"*";
//     }
//       }
//     else{
//       cout<<"*";
//       for(int col=0; col<4; col++){
//         cout<<" ";
//       }
//       cout<<"*";
//     }
//     cout<<endl;
// }

  // numeric full pyramid

  
  // int n; 
  // cin>>n;
  
  // for(int row=0; row<n; row++){
  //   // space
  //   for(int col=0; col<n-row-1; col++){
  //     cout<<" ";
  //   }
  //   // numbers
  //   for(int col=0; col<row+1;col++){
  //     cout<< row+ col+1;
  //   }

  //   // reverse counting
  //   int number= 2*row;
  //   for(int col=0; col<row; col++){
  //     cout<<number;
  //     number--;
  //   }
  //   cout<<endl;
  // }

  }
