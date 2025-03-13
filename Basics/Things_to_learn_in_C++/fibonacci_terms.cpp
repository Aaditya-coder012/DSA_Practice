#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int a = 0, b = 1, nextNumber;
    for (int i = 2; i <= n; i++) {
        nextNumber = a + b;
        a = b;
        b = nextNumber;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the position (n) for Fibonacci number: ";
    cin >> n;
    
    cout << "The " << n << "th Fibonacci number is: " << fibo(n) << endl;
    
    return 0;
}
