#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;//get the last digit of given number 
        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){ //as the given number can't be more than (2^31-1) and lesser than -2^31 
            return 0;
        }
        ans=ans*10+digit;//initially ans is 0 so ans=0*10+ (3 from 123)-->3 last digit n=12 again ans=3*10+2=32 ,n=2 and ans=32*10+1-->321 ,n=0 
        n/=10; // update the n in every iteration
        i++; // increases the value of i in every step
    }
    cout<<ans<<endl;
}