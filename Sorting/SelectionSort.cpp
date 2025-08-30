#include <iostream>
using namespace std;
void Swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}
int SelectionSort(int arr[], int n){
      for(int i = 0; i < n-1 ; i++){
            for(int j = i+1; j<n; j++){
                  if(arr[i]>arr[j]){
                        Swap(&arr[j],&arr[i]);
                  }
            }
      }
}
void PrintArray(int arr[], int n){
      cout<<"\nSorted Array is : ";
      for(int k = 0; k<n; k++){
            cout<< arr[k] <<" ";
      }
}
int main(){
      int arr[6] = {3,8,2,1,4,9};
      int n = 6;
      cout<<"Original Array is: ";
      for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
      }
      SelectionSort(arr,n);
      PrintArray(arr,n);
}