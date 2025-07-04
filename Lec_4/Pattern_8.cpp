#include<iostream>
using namespace std;
int main(){
      int n ;
      cout<<("Enter a number: ");
      cin>>n;
      int i;
      int ch = 65;
      while(i<=n){
            int  j = 1;
            while (j<=i)
            {
                  cout<<(char(ch + n - i));
                  j=j+1;
                  ch = ch +1;
            }
            i = i + 1;
            cout<<("\n");
      }
}