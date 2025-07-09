#include<iostream>
using namespace std;
void printArray(int arr[],int size){
      for(int i =0; i<size;i++){
      cout<<arr[i]<<" ";
      }

}
void Swap( int arr[],int size){
      for(int i = 0; i<size;i=i+2)
      {
            if(i+1<size){
                  swap(arr[i],arr[i+1]);
            }
      }

}
int main(){
      int arr[5] = {1,2,3,4,5};
      Swap(arr,5);
      printArray(arr,5);
}