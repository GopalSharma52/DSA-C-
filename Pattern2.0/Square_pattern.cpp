#include <iostream>
using namespace std;
int main(){
      int n;
      cout<<("Enter a Number: ");
      cin>>n;
      int i=1;
      int count = 1;
      while (i<=n)
      {
            int j=1;
            while (j<=n)
            {
                  cout<<(count)<<" ";
                  count=count+1;
                  j=j+1;
            }
            i=i+1;
            cout<<("\n");
            
      }
      
}