#include<iostream>
using namespace std;
int main(){
      int arr[6]={1,2,3,4,5,5};
     int ans = 0;
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
      ans = ans^arr[i]; 
     }
     for(int i =1;i<sizeof(arr)/sizeof(arr[0]);i++){
      ans=ans^i;
     }
     cout<<"Duplicate element is : "<<ans;
}