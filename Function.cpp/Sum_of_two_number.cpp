#include<iostream>
using namespace std;
int sum(int a,int b){
int sum = a + b;
return sum;
}
int main(){
      int a;
      int b;
      cout<<"Enter first number: ";
      cin>>a;
      cout<<"Enter second number: ";
      cin>>b;
      cout<<"Sum of given numbers are : "<<sum (a,b);
}