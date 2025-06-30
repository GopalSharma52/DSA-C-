// #include<iostream>
// using namespace std;
// int main(){
//       int n ;
//       cout<<("Enter a number: ");
//       cin>>n;
//       int i;
//       int space = n - i;
//       while (space){
//             cout<<space;
//             space = space - 1;
//          int j;
//       while (j<=i)
//       {
//          cout<<'*';
//          j=j+1;
//       }
//       cout<<"\n";
//       i=i+1;
// }
      
// }
#include<iostream>
using namespace std;
int main(){
      int n ; 
      cout<<("Enter the number: ");
      cin>>n;
      int i = 1;
      while(i<=n){
            int j = n;
            while (n-i)
            {
                  cout<<('*');
            }
            cout<<("\n");
            i=i+1;

      }
}