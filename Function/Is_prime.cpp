#include<iostream>
using namespace std;
int m;
bool Isprime(int n){
      for(int i=2;i<n;i++){
      m=n%i;
if(m!=0){
      cout<<"Number is Prime."<<endl;
      break;
      }
else
      {
            cout<<"Number is not prime.."<<endl;
            break;
      }
}
}
int main(){
      int n ;
      cout<<"Enter the value of n : ";
      cin>>n;
      int ans = Isprime(n);
      // cout<<ans;
}