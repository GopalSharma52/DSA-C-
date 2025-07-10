#include<iostream>
using namespace std;
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
      int index = lastOccerence(arr,11,key);
      cout<<index;
}
// #include<iostream>
// using namespace std;

// int lastOccurrence(int arr[], int size, int key) {
//     int start = 0, end = size - 1;
//     int ans = -1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key) {
//             ans = mid;
//             start = mid + 1; // Search right half
//         } else if (arr[mid] < key) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return ans;
// }

// int main() {
//     int arr[5] = {1, 2, 2, 2, 2};
//     int key = 2;
//     int index = lastOccurrence(arr, 5, key);
//     cout << index;
// }
