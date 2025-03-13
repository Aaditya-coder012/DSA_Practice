#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number n : ";
    cin>>n;

    int i = 0;
    int ans  = 0;

    int r = 1 +(~n);  //add one to negative number after getting 1's and 2's complement to get r

    while(r!=0){
        
       int bit = r&1; //checks last bit number and stores it in ans
       ans = (bit * pow(10,i)) + ans;
       r = r>>1;
       i++;
    }

    cout<<ans;


}