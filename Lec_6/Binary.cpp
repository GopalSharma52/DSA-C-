#include<iostream>
#include<math.h>
using namespace std;
int main(){
      int n;
      cout<<"Enter a number: ";
      cin>>n;
      int num = 0;
      int i = 0;
      while(n!=0){
            int bit =n&1;
            num = bit * (pow(10,i)) + num;
            n=n>>1;
            i++;
      }
      cout<<num;
}