#include<iostream>
#include<math.h>
using namespace std;
int main(){
      int n;
      cout<<"Enter a number: ";
      cin>>n;
      int m = n;
      int mask = 0;
      if(n==0){
            cout<<1 ;
      }
      while(m!=0){
      mask=(mask<<1)|1;           //Shi tarah se samajh nhii aaya
           m= m>>1;
      }
      int ans = (~n) & mask;
      cout<< ans;
}