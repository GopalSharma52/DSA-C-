#include <iostream>
using namespace std;
int main(){
      int a ;
      cout<<("Enter a number: ");
      cin>>a;
      if(a>0){
            cout<<("A is positive.");
      }
      else {
            if (a<0){
                  cout<<("A is negative.");
            }
            else{
                  cout<<("A is Zero.");
            }
      }

}