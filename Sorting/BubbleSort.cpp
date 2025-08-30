#include <iostream>
using namespace std;
void Swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}
void BubbleSort(int arr[],int n){
      for(int i = 0; i < n-1;i++){
            int x = 0;
            for(int j = 0; j<n-i-1; j++){
                  if(arr[j]>arr[j+1]){
                        x = 1;
                        Swap(&arr[j],&arr[j+1]);
                  }
            }
            if(x==0){
                  break;
            }
      }
}
void PrintArray(int arr[],int n){
      cout<<"\n\nSorted Array is: ";
      for(int k = 0; k<n; k++){
            cout<< arr[k]<<" ";
      }
}
int main(){
      int arr[6] = {3,8,2,1,4,9};
      int n = 6;
      cout<<"Original Array is: ";
      for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
      }
      BubbleSort(arr,n);
      PrintArray(arr,n);
}