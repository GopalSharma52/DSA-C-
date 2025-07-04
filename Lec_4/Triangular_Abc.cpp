#include <iostream>
using namespace std;
int main(){
      int n;
      cout<<("Enter a number: ");
      cin>>n;
      int i = 1;
      int count = 65;
      while (i<=n)
      {
            int j =1;
            while (j<=i)
            {
                  cout<<(char(count+i+j-2));
                  j=j+1;
            }
            i = i + 1;
            cout<<("\n");
            
      }
      
}