#include<iostream>
#include<climits> 
using namespace std;
int main(){
      int n;
      cout<<"Enter the size of array: ";
      cin>>n;
      int arr[n];
     int mx = INT_MAX;
      cout<<n<<" elements of array.";
      for (int i =0;i<n;i++){
            cin>>arr[i];
      }
      for(int j = 0; j<n;j++){
            int num = arr[j];
            mx = min(mx,num);
            }
            cout<<"Minimum number is: "<<mx;
      }