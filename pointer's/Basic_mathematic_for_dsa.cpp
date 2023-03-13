#include<iostream>
using namespace std;

// FAST EXPONENTIATION 

int fastexponentiation(int a, int b){
      int ans=1;
      while(b>0){
        if(b & 1){
        ans*=a;
      }
      a=a*a;
      b>>=1;
  }
    return ans;
}// Time Complexity is O(log b)


int slowexponentiation(int a, int b){
      int ans=1;
      for(int i=0; i<b;++i){
        ans*=a;
      }
      return ans;
} // Time Complexity is O(b)

int main(){

// fast exponentiation 
  cout<<slowexponentiation(2,5);
  cout<<fastexponentiation(2,5);

  // int arr[5]={1,2,3,4,5};
  // int *ptr=arr;
  // ptr++; // value stored after increment 
  // cout<<*ptr<<endl;// that's why printing 2 

// LEET CODE QUESTION
// Count Prime

// below code is wrong written check at the end of the code which written right with time complexity O(n)

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
};  //wrong code 

time complexity very high reduce time complexity write another code
*/


// LEET CODE QUESTION WITH O(n) TIME COMPLEXITY  WHICH IS RIGHT CODE REDUCE'D COMPLEXITY 

// class Solution {
// public:
//     int countPrimes(int n) {
//        if(n==0) 
//        return 0;

//        vector<bool> prime(n, true); // all are prime maked already
//        prime[0]=prime[1]=false;

//        int ans=0;
//        for(int i=2; i<n; i++){
//            if(prime[i]){
//                ans++;

//                int j=2*i;
//                while(j<n){
//                    prime[j]=false;
//                    j+=i;
//                }
//            }
//        }
//        return ans;
//     }
// }; // right code

//  GFG PRACTICE QUESTION 
// FIND GCD OF TWO  NUMBER

// class solution
// {
//   public:
//   int gcd(int A, int B){
//     if(A==0) return B;
//     if(B==0) return A;

//     while(A>B){
//       if(A>B){
//         A=A-B;
//       }
//       else{
//         B=B-A;
//       }
//     }
//     return A==0 ? B : A;
//   }
// }; // end of this code

// how to find GCD

/* Euclid's algorithm to find gcd
1. gcd(a,b)=gcd(a-b,b) OR gcd(a%b, b)
2. Lcm(a,b)*gcd(a,b)=a*b */


// how to find LCM
/* lcm=hcf=a* --> Formula

  lcm(a,b)*gcd(a,b)=a*b

// MODULO ARITHMETIC

1. (a%n)-->[0,........,n-1]
2. Generally , to avoid overflow while storing integet we do 
    modulo with a large number.

    i). (a+b)% m=a%m+b%m
    ii). a% m-b% m=(a-b) % m
    iii). ((a%m)%m)%m =a%m
    iv). a%m*b % m=(a*b)%m


// FAST EXPONENTIATION

1.Normal Solution to find a^b= O(b).
2.Better Solution a^b= O(log b)

*/


}