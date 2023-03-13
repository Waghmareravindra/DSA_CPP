#include<iostream>
using namespace std;

int main(){

  // int arr[5]={1,2,3,4,5};
  // int *ptr=arr;
  // ptr++; // value stored after increment 
  // cout<<*ptr<<endl;// that's why printing 2 

// LEET CODE QUESTION
// Count Prime

// above is wrong code written check at the end of the code which written right with time complexity O(n)

/*
class Solution {
public:

    bool isprime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int c=0;

        for(int i=0;i<n;i++){
            if(isprime(i)){
                ++c;
            }
        }
        return c;
    }
};

time complexity very high reduce time complexity write another code
*/


// LEET CODE QUESTION WITH O(n) TIME COMPLEXITY  WHICH IS RIGHT CODE REDUCE'D COMPLEXITY 

class Solution {
public:
    int countPrimes(int n) {
       if(n==0) 
       return 0;

       vector<bool> prime(n, true); // all are prime maked already
       prime[0]=prime[1]=false;

       int ans=0;
       for(int i=2; i<n; i++){
           if(prime[i]){
               ans++;

               int j=2*i;
               while(j<n){
                   prime[j]=false;
                   j+=i;
               }
           }
       }
       return ans;
    }
};
}