#include<bits/stdc++.h>
using namespace std;

int mountain_peak(int arr[] , int n){
     int s = 0;
     int e = n - 1;
     int mid = s + (e-s)/2;
     while(s < e){
        if(arr[mid] < arr[mid + 1]){
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
    int arr[4] = {0,10,5,2};
    int value = mountain_peak(arr , 4);
    cout<<"The peak value of the given array is : " << value << endl;
}