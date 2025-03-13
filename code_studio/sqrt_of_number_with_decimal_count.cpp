#include<bits/stdc++.h>
using namespace std;

// Function to find the integer part of the square root
int squrtInteger(int n) {
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        long long square = (long long)mid * mid; // Use long long to avoid overflow
        if (square == n) {
            return mid; // Return mid if square is exactly equal to n
        } else if (square < n) {
            ans = mid; // Update ans and search in the right half
            s = mid + 1;
        } else {
            e = mid - 1; // Search in the left half
        }
        mid = s + (e - s) / 2;
    }
    return ans; // Return the floor value of the square root
}

// Function to refine the precision of the square root
double morePrecision(int n, int precision, int tempsol) {
    double factor = 1.0;
    double ans = tempsol;
    for (int i = 0; i < precision; i++) {
        factor /= 10; // Reduce factor by 10 for each precision level
        for (double j = ans; j * j < n; j += factor) {
            ans = j; // Update ans until j * j exceeds n
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    int tempsol = squrtInteger(n); // Get the integer part of the square root
    cout << "Answer is " << morePrecision(n, 3, tempsol) << endl; // Refine to 3 decimal places
    return 0;
}