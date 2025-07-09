#include<iostream>
using namespace std;
int main(){
      int target;
      cout<<"Enter your Target: ";
      cin>>target;
      int arr[8]={1,2,3,6,5,4,5,6};
      cout<<"Your triplet of sum target is:";
      for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
            for(int j = i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
                    for(int k = j+1;k<sizeof(arr)/sizeof(arr[0]);k++){
                        if(arr[i]+arr[j]+arr[k]==target){
                              cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                        }
                  
            }

            }
      }
}