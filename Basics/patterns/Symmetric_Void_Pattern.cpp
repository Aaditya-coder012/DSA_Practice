#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int a=0;
    for(int i=0;i< n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<a;j++){
            cout<<" ";
        }
         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        a+=2;
        cout<<endl;
    }

    a=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<a;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        a-=2;
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    pattern(n);
}