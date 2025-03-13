#include<bits/stdc++.h>
using namespace std;
int fibo(int a,int b,int n){
    for(int i=0;i<=n;i++){
        int nextnumber;
        nextnumber = a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    fibo(a,b,n);
}