/*The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    int m=n; //tells m = n
    int mask=0;
    if(m==0){
        cout << "Complement: 1" << endl; // if(m==0) returns complement
    }
    while(m!=0){
        mask=(mask<<1)|1;//left shift mask which means 1st compliment of mask and (or with 1) 
        m=m>>1;// again right shift to m 
    }
    int ans=(~n)&mask;//not the n and with mask
    cout << "Complement: " << ans << endl;
}