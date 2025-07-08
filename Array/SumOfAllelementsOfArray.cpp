#include<iostream>
using  namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ; i ++){
      cin>>arr[i];
    }
    int sum  = 0;
    int add;
    for (int j = 0 ; j<n;j++){
       add = arr[j];
       sum = sum + add;
    }
          cout<<"Sum of elements of array : "<<sum;

      }