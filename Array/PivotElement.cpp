// #include<iostream>
// using namespace std;
// int pivot(int arr[], int size){
//       int s =0;
//       int e = size - 1;
//       int mid = s + (e - s)/2;
//       while(s<e){
//       if(arr[mid]>=arr[0]){
//             s = mid + 1;
//       }
//       else{
//             e = mid;
//       }
// }
//       mid = s + (e-s)/2;
//       return s;
// }
//       int main()
//       {
//             int arr[5] = { 3,8,10,17,1};
//             cout<<"Index of pivot element is: " << pivot(arr,5);
//       }
#include<iostream>
using namespace std;

int pivot(int arr[], int size) {
    int s = 0;
    int e = size - 1;
    int mid;

    while (s < e) {
        mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return arr[s];
}

int main() {
    int arr[5] = {5,3,4,11,12};
    cout << "Index of pivot element is: " << pivot(arr, 5);
    return 0;
}
