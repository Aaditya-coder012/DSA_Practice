#include<bits/stdc++.h>
using namespace std;

void find_unique(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];// XOR operation to find the unique element
    }
    cout<<"The unique element in the given array is : "<<ans<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the elements of array : ";
        cin>>arr[i];
    }
    find_unique(arr,size);
}
