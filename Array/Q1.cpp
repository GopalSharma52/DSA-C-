#include<iostream>
using namespace std;
int main(){
      int arr[13] = { 2,3,6,5,4,8,9,9,8,4,5,6,2};    // jo element array me repeat nhi ho rha vo output me aaye.
      int ans = 0;
      for(int i =0 ; i<13;i++){
            ans = ans ^ arr[i];
      }
      cout<<ans;
}