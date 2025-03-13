#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    int product = 1;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;  // Get the last digit of the number
        sum += digit;        // Add the digit to the sum
        product *= digit;    // Multiply the digit to the product
        n /= 10;             // Remove the last digit from the number
    }

    int ans = product - sum;  // Calculate the difference
    cout << "The result (product - sum) is: " << ans << endl;

    return 0;
}
