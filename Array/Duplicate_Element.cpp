#include<iostream>
using namespace std;
int main(){
      int arr[7]={1,2,3,4,5,6,4};
      int ans = 0;
      for(int i=0;i<=7;i++){
            ans = ans + i ^ arr[i];
      }
      cout<<ans;
}