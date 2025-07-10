#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
      int start = 0;
      int end = size - 1;
      int ans=-1;
      int mid = start + (end-start)/2;
      while(start<=end){
            if(arr[mid]==key){
                  ans = mid;
                  end = mid - 1;
            }
            else if(arr[mid]<key){
                  start = mid + 1;
            }
            else if (arr[mid]>key){
                  end = mid - 1;
            }
           mid = start + (end-start)/2;
      }
     return ans;
}
int lastOccerence(int arr[],int size , int key){
      int start = 0;
      int end = size - 1;
      int mid = start + (end-start)/2;
      int ans=-1;
      while (start <= end){
            if(arr[mid]==key){
                  ans = mid;
                  start = mid + 1;
                  // mid = (start + end)/2;
            }
            else if(arr[mid]<key){
                  start = mid + 1;
            }
            else if(arr[mid]>key){
                  end = mid - 1;
            }
            mid = start + (end-start)/2;
      }
      return ans;
}
int main(){
      int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};
      int key = 3;
      int index = firstOcc(arr,11,key);
      int index1 = lastOccerence(arr,11,key);
       cout<<"First occuring index of "<<key<<" in this array is :"<<index<<endl;
      cout<<"Last Occerence of "<< key <<" in the given array is : " <<index1<<endl;
      cout<<"Total number of Occerence of "<< key <<" in the given array is : " <<index1-index+1;
}