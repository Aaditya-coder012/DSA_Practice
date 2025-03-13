#include <bits/stdc++.h>
using namespace std;

// Function to calculate the nth term of AP
int nthTermAp(int a, int d, int n) {
    return a + (n - 1) * d;
}

int main() {
    int n, a, d;
    
    // Taking input from user
    cout << "Enter the first term (a): ";
    cin >> a;    
    
    cout << "Enter the common difference (d): ";
    cin >> d;
    
    cout << "Enter the term position (n): ";
    cin >> n;

    // Validate input
    if (n <= 0) {
        cout << "Error: The term position (n) must be a positive integer." << endl;
        return 1; // Exit with error
    }

    // Calculate nth term
    int nthTerm = nthTermAp(a, d, n);

    // Output result
    cout << n << "th term of the AP is: " << nthTerm << endl;    

    return 0;
}
