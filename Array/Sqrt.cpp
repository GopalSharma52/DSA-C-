#include<iostream>
using namespace std;
int Sqrt(int arr[],int n){
      int s = 0;
      int e = n-1;
      int mid = s + (e-s)/2;
      int ans = -1;
      while (s<=e)
      {
            if(arr[mid]*arr[mid] == arr[n-1]){
                  return arr[mid];
            }
            else if(arr[mid]*arr[mid] < arr[n-1]){
                  s = mid + 1;
                      ans = arr[mid];  
            }
            else{
                  e = mid - 1;
               
            }
            mid = s + (e-s)/2;
      }
      return ans;
      
}
int main(){
      int arr[10] = {1,2,3,4,5,6,7,8,9,16};
      int n = 10;
      int x = Sqrt(arr,n);
      cout<<"Square root of "<<arr[n-1]<<" is : "<<x;

}