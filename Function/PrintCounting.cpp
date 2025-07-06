#include<iostream>
using namespace std;
//Function Signature
void PrintCounting(int n){
      //Function Body
      for(int i =1; i<=n;i++){
            cout<<i<<" ";
      }
}
int main(){
      int n;
      cout<<"Enter a number: ";
      cin>>n;
      //Function Call
      PrintCounting(n);
}