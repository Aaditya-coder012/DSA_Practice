#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    int count=0;
    // Count the number of 1s in the binary representation of n
    while(n!=0){
        if(n&1){  // Check if the least significant bit is 1    
            count++;
        }
        n=n>>1; // Right shift n to check the next bit
    }
    cout<<count<<endl;
}