#include<iostream>
using namespace std;
int main(){
      int target;
      cout<<"Enter your target: ";
      cin>>target;
      int arr[8]={6,5,4,9,8,7,3,2};
      for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
            for(int j = i+1;j<=sizeof(arr)/sizeof(arr[0]);j++){
                  if(arr[i]+arr[j]==target){
                        cout<<arr[i]<<","<<arr[j]<<endl;
                  }
            }

      }
}