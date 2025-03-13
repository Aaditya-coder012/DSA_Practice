#include<bits/stdc++.h>
using namespace std;
int max(int n,int num[]){
    int mx=INT_MIN;
    int smx =INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]!=mx) {
            smx=max(smx,num[i]);  
        } 
    }
    return smx;
}

int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the  elements of array : ";
        cin>>num[i];
    }
    int max_value = max(n, num);
    cout << "Second Maximum value of array is : " << max_value << endl;
    
}