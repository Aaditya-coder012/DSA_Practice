#include<bits/stdc++.h>
using namespace std;
void binary(int n){
    int a;
    for(int i=1;i<=n;i++){
        if(i%2==0) a=1;
        else a=0;
        for(int j=1;j<i;j++){
            cout<<a;
            a=1-a;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    binary(n);
}