#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<("Enter the value of n: ");
      cin>>n;
      int a = 0;
      int b = 1;
      cout<< a << " ";
      cout<< b << " ";
      for(int i = 1;i<=n;i++){
            int next_num = a+b;
            cout << next_num << " ";
            a=b;                //=>    b me a ki value dal denge 
            b=next_num;         // =>   or ab ki b me next num ki value dal denge
      }
}