#include<iostream>
using namespace std;
int BinarySearch(int oddarr[] , int size , int key){
      int left =0;
      int right = size - 1;
      int mid = (left + right)/2;
      while(left <= right ){
            if(oddarr[mid]==key){
                  return mid;
            }
            if(oddarr[mid]<key){
                  left=mid+1;
            }
            else{
                  right = mid -1;
            }
            mid = (left + right )/2;
      }
      return -1;

}
int main(){
      int oddarr[7] = { 3,5,7,9,11,13,15};
      int key = 13;
      int index = BinarySearch(oddarr,7,key);
      cout<<"Indexing of your target is: "<< index;
}