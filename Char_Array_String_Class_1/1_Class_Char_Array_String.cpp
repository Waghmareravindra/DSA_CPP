#include<iostream>
#include<string.h>

using namespace std;

// first basic's 
// first question  

int getlength(char name[]){
  int length =0;
  int i=0;

  while(name[i] != '\0'){
    length++;
    i++;
  }
  return length;
}


// // second question reverse a string

// void reversechararray(char name[]){
//   int i=0;
//   int n=getlength(name);
//   int j=n-1;

//   while(i<=j){
//     swap(name[i], name[j]);
//     i++;
//     j--;
//   }
// }
//   /* same u can do by using for loop 
//    for(; i<=j;)
//    swap(name[i], name[j]);
//     i++;
//     j--;*/ 

//   // question third replace all spaces 

//   void replacespace (char sentence[ ]){
//     int i=0;
//     int n=strlen(sentence);

//     for(int i=0; i<n; i++){
//       if(sentence[i]==' '){
//         sentence[i]='@';
//       }
//     }
//   }

// //question fourth convert lower case to upper case

// void convertintouppercase(char arr[]){
//   int n=getlength(arr);

//   for(int i=0; i<n; i++){
//     arr[i]=arr[i]-'a'+'A'; 
//   }
// }


int main(){
// first basic's 
  // char names[100];
  // cout<<"enter your name ";
  // cin.getline(names,60);

  // cout<<"Your name is "<<names<<endl;


// First question find length of character

// char name[100];
// cout<<"enter name";
// cin>>name;

// cout<<"length is "<<getlength(name)<<endl;
// // predefined function for same finding length of character
// cout<<"length is "<<strlen(name)<<endl;
// // many predefined fun. like strcmp for comparision and strcpy for copy


// // // Second question   Reverse a string


// cout<<"initially"<<name<<endl;
// reversechararray(name);
// cout<<"after reverse process"<<name<<endl;

// return 0;
// first and second question combine for second q.


// char sentence[100];
// cin.getline(sentence, 100);

// replacespace(sentence);
// cout<<"printing sentence"<<endl<<sentence<<endl;

// return 0;


// Convert lower char to Upper char


// char arr[100]="ravindra";
// convertintouppercase(arr);
// cout<<arr<<endl;
    







    //  STRING


    

}