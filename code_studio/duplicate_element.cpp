/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.*/
#include <bits/stdc++.h>
using namespace std;

void find_unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // XOR operation to find the unique element
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i; // This XOR operation performs its operation with i and cancel out similar elements and  prints the duplicate elements
    }
    cout << "The Duplicate element in the given array is : " << ans << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements of array : ";
        cin >> arr[i];
    }
    find_unique(arr, size);
}