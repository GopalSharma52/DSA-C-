#include<iostream>
#include<vector>
using namespace std;

void sortZeroOne(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {
        if(arr[left] == 1 && arr[right] == 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        if(arr[left] == 0) left++;
        if(arr[right] == 1) right--;
    }
}
int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 0,1,0,0,0,0,0,0,1};

    sortZeroOne(arr);

    cout << "Sorted Array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}
