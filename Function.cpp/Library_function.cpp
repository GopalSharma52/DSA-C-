// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//       int n;                                                 These are some library functions.
//       cout<<"Enter the value of n: ";
//       cin>>n;
//       cout << "Square root of n is: "<< sqrt(n)<<endl; 
//       cout <<"Cube root of n is: "<< cbrt(n);
// }
#include<iostream>
#include<cmath>
using namespace std;
int main(){
      int a,b;
      cout << "Enter the value of a:";
      cin>>a;
      cout << "Enter the value of b:";                        // These are some other library functions.
        cin>>b;
      cout<<min(a,b)<<endl;
      cout<<max(a,b)<<endl;
      cout<<pow(a,b)<<endl;
}