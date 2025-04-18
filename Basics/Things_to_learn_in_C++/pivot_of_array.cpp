#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){ 
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    } 
    return s;
}

int main(){
    int arr[5] = {3,8,10,17,1};
    cout<<"The pivot element of array is at Index : " << pivot(arr,5) << endl;
}