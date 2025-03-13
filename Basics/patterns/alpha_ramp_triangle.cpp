#include<bits/stdc++.h>
using namespace std;
void alphabet(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    alphabet(n);
}