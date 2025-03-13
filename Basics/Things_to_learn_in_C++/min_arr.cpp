#include<bits/stdc++.h>
using namespace std;

int min(int n , int num[]){
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        mn=min(mn,num[i]);
    }
    return mn;
}

int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the elememts of array : ";
        cin>>num[i];
    }

    int min_value = min(n,num);
    cout<<"The minimum value of array is : "<<min_value<<endl;
    return 0;
}