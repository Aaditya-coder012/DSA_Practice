#include<bits/stdc++.h>
using namespace std;

long long int binarysearch(int n) {
    int s = 0;
    int e = n; // Initialize e as n
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e) { // Corrected loop condition
        long long int square = mid * mid;
        if (square == n) {
            return mid;
        } else if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans; // Return the floor value
}

int floorSqrt(int n) {
    // Handle edge cases
    if (n == 0 || n == 1) {
        return n;
    }
    return binarysearch(n);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = floorSqrt(n);
    cout << "The floor value of the square root of " << n << " is: " << result << endl;
    return 0; 
}