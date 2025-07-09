#include<iostream>
#include<climits> 
using namespace std;
int main(){
      int arr[5]={1,2,5,6,5};
      int brr[5]={7,9,8,6,5};
      for(int i=0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
            for(int j = 0 ; j<sizeof(brr)/sizeof(brr[0]);j++){
                  if(arr[i] == brr[j]){
                        cout<<arr[i]<<" ";
                        brr[j]=INT_MIN;
                  }
            }
      }
      cout<<"Are Common Elements in Array  ";
}
