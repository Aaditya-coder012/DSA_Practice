#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<"Enter the Array Element : ";
        cin>>arr[i];
    }
}

void rotate(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<"The Rotated array is : "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
   int arr[n];
    print_array(arr,n);
    rotate(arr,n);
}