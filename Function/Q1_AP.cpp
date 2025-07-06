#include<iostream>
using namespace std;
int nthterm(int n){
      int num = 3*n+7;
      return num;
}
int main(){
      int n;
      cout<<"Enter the value of n: ";
      cin>>n;
      int ans = nthterm(n);
      cout<<"Nth term according to value of n is: "<< ans;
}