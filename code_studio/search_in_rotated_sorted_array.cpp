#include <bits/stdc++.h>
using namespace std;

int getpivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binary_search(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int search(int arr[], int n, int k) {
    int pivot = getpivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binary_search(arr, pivot, n - 1, k);
    } else {
        return binary_search(arr, 0, pivot - 1, k);
    }
}

int main() {
    int arr[5] = {1, 3, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 7; // Key to search for

    int result = search(arr, n, k);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}