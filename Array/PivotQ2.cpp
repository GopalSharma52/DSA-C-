
#include <iostream>
using namespace std;

int getpivot(int arr[], int n) {
    int s = 0, e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s; // pivot index
}

int BinarySearch(int arr[], int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {7, 8, 1, 2, 3};
    int n = 5;
    int target = 3;

    int pivot = getpivot(arr, n);
    int x;

    if (target >= arr[pivot] && target <= arr[n - 1]) {
        x = BinarySearch(arr, pivot, n - 1, target);
    } else {
        x = BinarySearch(arr, 0, pivot - 1, target);
    }

    if (x != -1) {
        cout << "Your target index is: " << x;
    } else {
        cout << "Target not found..";
    }
}
