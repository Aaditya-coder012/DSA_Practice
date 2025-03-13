#include<bits/stdc++.h>
using namespace std;
void triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    triangle(n);
}