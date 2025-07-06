#include<iostream>
using namespace std;
int NthFabbonaciNumber(int num ){
      if(num == 0){
            return 0;
      }
      if(num == 1){
            return 1;
      }

       int a = 0;
       int b = 1;
       int nextnumber = 0;
       for(int i = 2; i<= num; i++){
            nextnumber = a + b;
            a = b;
            b = nextnumber;
       }
       return b;
}
int main(){
      int n;
      cout<<"Enter the value of n: ";
      cin>>n;
      int ans = NthFabbonaciNumber(n);
      cout<<n << " Fabbonaci Number is: "<<ans;
}