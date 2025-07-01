#include <iostream>
using namespace std;
int main(){
      int n;
      cout<<("Enter the value of n: ");
      cin>>n;
      for(int i=1;i<=n;i++){
            for(int j = 1;j<=n-i;j++){
                  cout<<" ";
            }
                  for(int k =1; k <=1;k++){
                        cout<<"*";
                  }
                                for(int l = 1; l<=(2*i-1);l++){
                                      cout<<" ";
                                       }
                  for(int m =1 ; m<=1;m++){
                        cout<<'*';
                  }
            
            cout<<"\n";
      }
      for(int u  =1 ; u=n-1; u++){
            for(int q = 1;q<=u;q++){
                  cout<<" ";
            }
                  for(int o = 1;o<=1;o++){
                        cout<<'*';
                  }
                  for(int p=1;p=(2*n-u);p++){
                        cout<<" ";
                  }
                  for(int r = 1; r<=1;r++){
                        cout<<'*';
                  }
                  cout<<"\n";
            
      }
}