// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter the value of n: ";
//       cin>>n;
//       for(int i = 1 ; i<=n;i++){
//             for(int j = 1 ; j <=n-i+1;j++){
//             cout<<j;
//             }
//             cout<<("\n");
//       }

// }
// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<("Enter Value of n: ");
//       cin>>n;
      
//       for (int i = 0; i < n; i++)
//       {     int ch = 65;
//             for (int j = 0; j < n; j++)
//             {
//                   cout<<(char(ch));
//                   ch=ch+1;
//             }
//             cout<<endl;
//             }
// }
#include<iostream>
using namespace std;
int main(){
      int n =4;
      for(int i = 1; i<=n; i++){
            for(int j = 1; j<= i; j++){
                  cout<<i;
            }
            cout<<endl;
      }
}