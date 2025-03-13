#include<bits/stdc++.h>
using namespace std;
void pyramid(int n){
    int spaces=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        spaces-=2;
    }
}

int main(){
    int n;
    cout<<"Enter the Number n : ";
    cin>>n;
    pyramid(n);
}