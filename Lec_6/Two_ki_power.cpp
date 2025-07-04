#include<iostream>
using namespace std;
int main (){
      int n;
      cout<<"Enter the  value of n: ";
      cin>>n;
      while(n!=0){
            float num= n / 2;
            n=n-2;
        if(num == 1){
                  cout<<"True";
                  break;
            }
            else {
                  cout<<"False";
                  break;
            }
      }
}