#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible to distribute chapters into 'm' days with a given maximum time
bool ispossible(int n, int m, vector<int>& arr, long long mid) {
    int dayCount = 1; // Start with the first day
    long long currentTime = 0; // Time spent on the current day
    for (int i = 0; i < n; i++) {
        if (currentTime + arr[i] <= mid) {
            currentTime += arr[i]; // Add the current chapter's time to the current day
        } else {
            dayCount++; // Move to the next day
            if (dayCount > m || arr[i] > mid) {
                return false; // If days exceed 'm' or a chapter's time exceeds 'mid', return false
            }
            currentTime = arr[i]; // Start the new day with the current chapter's time
        }
    }
    return true; // If all chapters are distributed within 'm' days, return true
}

// Function to find the minimal value of the maximum time in a day
long long ayushGivesNinjatest(int m, int n, vector<int>& arr) {
    // Edge case: If the number of days is greater than the number of chapters
    if (m > n) {
        return -1;
    }

    long long low = *max_element(arr.begin(), arr.end()); // Minimum possible value (maximum chapter time)
    long long high = accumulate(arr.begin(), arr.end(), 0LL); // Maximum possible value (sum of all chapter times)
    long long ans = -1;

    // Binary search to find the minimal value of the maximum time in a day
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (ispossible(n, m, arr, mid)) {
            ans = mid; // Update the answer
            high = mid - 1; // Try to find a smaller value
        } else {
            low = mid + 1; // Increase the value
        }
    }
    return ans;
}

int main() {
    int m = 3; // Number of days
    int n = 5; // Number of chapters
    vector<int> arr = {1, 2, 2, 3, 1}; // Time required for each chapter

    long long result = ayushGivesNinjatest(m, n, arr);
    cout << "The minimal value of the maximum time in a day is: " << result << endl;

    return 0;
}