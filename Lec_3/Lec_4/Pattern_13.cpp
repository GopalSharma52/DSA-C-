#include <iostream>
using namespace std;
int main (){
      int n;
      cout<<("Enter the value of n: ");
      cin>>n;
      for(int i=1;i<=n;i++){  //=> outer loop
           for(int j = 1;j<=n-i;j++){        //=>Space loop
                 cout<<" ";
           }
            //  int num =1;      
            for(int k = 1;k<=i;k++){    //=>number loop
                  cout<<k;
                  // num++;
           }
            for(int l = i-1;l>=1;l--){
                  cout<<l;
           }
            cout<<"\n";
      }

}