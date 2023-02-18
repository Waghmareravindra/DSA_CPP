#include<iostream>
#include<vector>
#include<algorithm>

int main(){

vectotr<int> v{1,2,3,4,5,6};

if(binary_search(v.begin(),v.end(),30)){
  cout<<"not found"<<endl;
}
else{
  cout<<"found";
}

return 0;
cout<<endl;

}