#include<iostream>
using namespace std;
int main(){
      int n,r ;
      cout<<"Enter the value of n: ";
      cin>>n;
      cout<<"Enter the value of r: ";
      cin>>r;
      int prod=1;
      int pro = 1;
      int pp = 1;
      int nfact; 
      int rfact;
      int nrfact;
      for(int i = 1 ; i<=n;i++){
           prod=prod*i;
      }
      for(int j = 1 ; j<=r;j++){
           pro=pro*j;
      }
      for(int k = 1 ; k<=(n-r);k++){
            pp=pp*k;
      }
      int numerator = prod;
      int denominator = pro * (pp);
      cout<<"nCr is : "<< numerator/denominator;
}