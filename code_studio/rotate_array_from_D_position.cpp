#include<bits/stdc++.h>
using namespace std;
// Bruteforce solution
void leftRotate(int arr[],int n,int d){
    d=d%n;// returns the optimal value of d for rotation
    int temp[d];//stores dth term in temp
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i - (n-d)];
    }
}

int main(){
    int d;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the Dth place : ";
    cin>>d;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }

    leftRotate(arr,n,d);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}