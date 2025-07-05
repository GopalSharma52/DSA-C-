#include<iostream>
#include<cmath>
using namespace std;
int power(int num1 , int num2){
      int ch = 1;
      for(int i = 1 ; i<= num2; i ++){
            ch =  ch*num1 ;
      }
       return ch ;
}
int main(){
      int a , b;
      cout<<"Enter the value of a: ";
      cin>>a;
      cout<<"Enter the value of b: ";
      cin>>b;
      int ans = power(a,b);
      cout<<ans;

}