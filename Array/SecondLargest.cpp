#include<iostream>
#include<climits> 
using  namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i =0 ; i < n ; i ++){
      cin>>arr[i];
    }
    for(int j =0;j<n;j++){
      if(mx<arr[j]) mx = arr[j];
    }
    for(int k = 0; k<n;k++){
      if(smx<arr[k]  &&  smx != mx) smx=arr[k];
    }
    cout<<"Second Maximum is : "<<smx;
      }