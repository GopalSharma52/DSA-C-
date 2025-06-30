// #include <iostream>
// using namespace std;
// int main (){
//       int n;
//       cout<<("Enter the value of n: ");
//       cin>>n;
//       int x=65;
//       for(int i=1;i<=n;i++){
//             for(int j = 1;j<=i;j++){
//                   cout<<(char(x)) <<" ";
//                   x++;
//             }
//             cout<<"\n";
//       }

// }
#include <iostream>
using namespace std;
int main (){
      int n;
      cout<<("Enter the value of n: ");
      cin>>n;
      for(int i=1;i<=n;i++){
            for(int j = 1;j<=i-1;j++){
                  cout<<" ";
                  for(int k = 1; k=n;k++){
                        cout<<k;
                  }
            
            }
            cout<<"\n";
      }

}