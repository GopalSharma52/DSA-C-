#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
      int start = 0;
      int end = size - 1;
      int ans;
      int mid = (start+end)/2;
      while(start<=end){
            if(arr[mid]==key){
                  ans = mid;
                  end = mid - 1;
                  mid = (start + end )/2;
                  return ans;

            }
            else if(arr[mid]<key){
                  start = mid + 1;
            }
            else{
                  end = mid - 1;
            }
            mid = (start + end )/2;

      }
      return -1;
}
int main(){
      int arr [10] { 2,3,4,5,6,6,6,6,7,7};
      int key = 6;
      int index = firstOcc(arr,10,key);
      cout<<"First occuring index of "<<key<<" in this array is :"<<index;
}