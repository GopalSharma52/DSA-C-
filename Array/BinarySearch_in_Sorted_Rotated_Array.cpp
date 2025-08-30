#include<iostream>
using namespace std;
int getpivot(int arr[] , int n){
      int s = 0;
      int e = n-1;
      int mid = s + (e-s)/2;
      while(s<e){
      if(arr[mid] >= arr[0]){
            s = mid + 1;
      }
      else{
            e = mid;
      }
      mid = s + (e-s)/2;
}
      return s;
}
int Binarysearch( int arr[],int target,int s,int e){
      while(s<=e){
                int mid = s + (e-s)/2;
      if (arr[mid] == target){
            return mid;
      }
      if(arr[mid] < target){
            s = mid + 1;
      }
      else{
            e = mid - 1;
      }
}
return -1;
      }
int main(){
      int arr[5] = { 7,8,1,2,3};
      int n = 5;
      int target = 2;
      int pivot = getpivot( arr,n);
      int ans;
      if(pivot<=target && arr[n-1]>=target){
             ans = Binarysearch( arr,target,pivot,n-1);
      }
      else{
            ans = Binarysearch( arr,target,0,pivot-1);
      }
         cout<<"Your index of your target is: "<<ans;
      }