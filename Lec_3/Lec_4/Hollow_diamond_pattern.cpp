#include <iostream>
using namespace std;
int main(){
      int n;
      cout<<("Enter the value of n: ");
      cin>>n;
     for(int i = 0 ; i <n; i++){
      for(int j = 1; j<=n-i; j++){
            cout<<" ";
      }
      for(int k =1; k<=1; k++){
            cout<<'*';
      }
      if(i!=0){
      for(int l=1;l<=(2*i-1);l++){
            cout<<" ";
      }
      for(int j=1;j<=1;j++){
            cout<<'*';
      }
}
      cout<<"\n";
     
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Stars and space in between
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
      cout<<"\n";
     }
