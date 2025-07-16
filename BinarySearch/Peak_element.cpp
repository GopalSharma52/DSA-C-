#include <iostream>
using namespace std;
int main(){
      int arr[7] = { 2,5,6,7,8,10,2};
      int start = 0;
      int p =  sizeof(arr)/4 ;
      int end = p - 1 ;
      int mid = start + (end - start)/2;
      while(start<end){
            if(arr[mid]<arr[mid+1]){
                  start = mid + 1;
            }
            else{
                  end = mid;
            }
             mid = start + (end - start)/2;
      } 
       cout<<"The greatest element in the array is : "<<arr[start];
}