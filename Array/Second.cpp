#include<iostream>
using  namespace std;
int main(){
     int arr[6];
     cout<<"Enter the elements of Array: ";
     // Taking input in array through loop.
     for(int i=0;i<=5;i++){
     cin>>arr[i];
     }
     // output through loop.
     for(int i = 0 ; i <=  5 ; i ++){
      cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<"Size of Array is : "<<sizeof(arr)/4;
      }