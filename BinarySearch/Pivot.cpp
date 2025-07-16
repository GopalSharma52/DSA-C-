#include<iostream>
using namespace std;
int main(){
      int arr [5] = {7,9,1,2,3 };
      int start = 0;
      int end = sizeof(arr)/4-1;
      int mid = start + ( end - start )/2;
      while(start<end){
            if(arr[mid]<=arr[0]){
                  start  = start + 1;
            }
            else{
                  end = mid;
            }
            mid = start + ( end - start )/2;
      }
      cout<<"Pivot element is : "<<start;
}