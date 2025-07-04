#include<iostream>
#include<math.h>
using namespace std;
int main(){
      int n;
      cout<<"Enter a binary number: ";
      cin>>n;
      int sum = 0;
      int i = 0 ;
      while (n!=0)
      {
            int num =  n%1;
           if(num==1){
                  sum=num*pow(2,i) + sum;
            }
            n=n/10;
            i++;
      }
      cout<<sum;
      
}