#include<iostream>
#include<climits> 
using  namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ; i ++){
      cin>>arr[i];
    }
    for(int j =1;j<=n;j++){
      cout<<arr[n-j]<<" ";
    }
      }