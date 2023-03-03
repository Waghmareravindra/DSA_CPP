#include<iostream>
#include<string.h>

using namespace std;

bool comparestring(string a, string b){
  if(a.length() !=b.length())
    return false;

// else {//you can remove else and int j
  // int j=0;
  for(int i=0;i<a.length(); i++){
    if(a[i]!=b[i]/* or when we use j=0 b[j]*/){
      return false;
    }
    i++; /*j++ when we use j=0; */
  }return true;
}


int main(){
// create string
  string str;
// input
  cin>>str;  // if we gve cin ravi__wagh it ignore after space
  // // we can use getline(cin, str)

  // getline(cin, str);
  
  cout<<str<<endl;

// //finding length of string using str.length()
  cout<<"length of string is --> "<<str.length()<<endl;
// //finding string is empty or not
cout<<"is empty "<<str.empty()<<endl;
// // use push_back function for add
str.push_back('A');
cout<<str<<endl;

// pop_backfunction for remove last element
str.pop_back();
cout<<str<<endl;

// //for some element print
// // very imp
cout<<str.substr(2,6)<<endl;

// // for original string print 
cout<<str<<endl;

  // string comparision 

  // string comparision of first and second

string a="ravindra";
string b="waghmare";

if(a.compare(b)==0){
  cout<<"a and b are exactly same string "<<endl;
}

else{
  cout<<"a and b are not same "<<endl;
}

// //find a element in a string

string sentence ="hello kaise ho sab";
string target ="everyone";
// cout<< sentence.find(target);
if(sentence.find(target)==string::npos){
    cout<<"not found"<<endl;
}

  // string str ="this is my first message";
  // string word="babbar";

  // str.replace(11,5, "second");
  // cout<<str<<endl;

  string str1="ABCDEFGHIJKLMNO";
  str1.erase(10,10);
  cout<<str1;

  return 0;
}
