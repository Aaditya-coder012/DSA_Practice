#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;// Get the least significant digit (either 0 or 1)
        if(digit==1){
             ans += pow(2, i);  // Instead of pow(2, i), use bit shift (1 << i) to calculate powers of 2
        }
        n/=10;// Remove the last digit
        i++;  // Move to the next bit position
    }
    cout << "The decimal equivalent is: " << ans << endl;
}