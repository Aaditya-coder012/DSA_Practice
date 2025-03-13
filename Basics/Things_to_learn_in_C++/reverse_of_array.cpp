#include <bits/stdc++.h>
using namespace std;

void reverseArray(int size, int arr[]) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the array element: ";
        cin >> arr[i];
    }

    reverseArray(size, arr);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
