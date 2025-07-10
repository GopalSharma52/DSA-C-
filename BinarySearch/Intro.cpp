#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
      int start = 0;
      int end = n - 1;
      int mid = (start + end )/2;
      while(start <= end){
               if(arr[mid] == key){
                     return mid;
      }
               if(key > arr[mid]){
                     start = mid + 1;
      }
               else{
                     end = mid - 1;
      }
                mid = (start + end)/2;
}
                return -1;
}
int main(){
      int arr[8]={2,4,6,8,10,12,14,16};
      int brr[7]={3,5,7,9,11,13,15};
      int key = 14;
    
      int index =   BinarySearch(arr,8,key);
      cout<<index;
}