#include<bits/stdc++.h>
using namespace std;
void triangle(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
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