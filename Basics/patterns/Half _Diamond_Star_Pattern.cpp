#include<bits/stdc++.h>
using namespace std;
void pyramidupper(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j< i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pyramidlower(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the Number n : ";
    cin>>n;
    pyramidupper(n);
    pyramidlower(n);
}