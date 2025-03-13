#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 0;  // Store the binary result
    int i = 0;    // Variable to keep track of the position of the binary digit

    // Convert the number to binary
    while (n != 0) {
        int bits = n & 1;               // Extract the least significant bit
        ans = (bits * pow(10, i)) + ans; // Add the bit to the result in the correct position
        n = n >> 1;                     // Right shift the number to process the next bit
        i++;                            // Increment the position
    }

    cout << "The binary representation is: " << ans << endl;
    return 0;
}