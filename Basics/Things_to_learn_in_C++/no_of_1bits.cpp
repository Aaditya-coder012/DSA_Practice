/*The __builtin_popcount function in C++ is a built-in function provided by the GCC compiler. It is used to count the number of set bits (1s) in an unsigned integer*/
#include<bits/stdc++.h>
using namespace std;

int countOneBits(int num) {
    return __builtin_popcount(num); // Counts 1 bits in binary representation
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int totalOneBits = countOneBits(a) + countOneBits(b);
    cout << "Total number of 1 bits: " << totalOneBits << endl;

    return 0;
}
