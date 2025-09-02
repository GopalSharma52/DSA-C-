#include <iostream>
using namespace std;
void InsertionSort(int arr[] , int n){
      for(int i = 1;i<n;i++){
            int j = i-1;
            int temp = arr[i];
            for(;j>=0;j--){
                  if(arr[j]>temp){
                        arr[j+1] = arr[j];
                  }
                  else{
                        break;
                  }
            }
            arr[j+1] = temp;
      }

}
void PrintArray(int arr[], int n){
      cout<<"\nSorted Array is : ";
      for ( int i = 0; i < n; i++)
      {
            cout<<arr[i]<<" ";
      }
}
int main(){
      int arr[5] = {2,5,9,7,6};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout<<"Original Array is : ";
      for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
      }
       InsertionSort(arr,n);
       PrintArray(arr,n);
}