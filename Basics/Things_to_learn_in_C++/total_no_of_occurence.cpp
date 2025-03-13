#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n , int k){
    int start = 0 , end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(k == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;    
}

int lastOcc(int arr[], int n , int k){
    int start = 0 , end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(k == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,3,3,3,3,5};
    int firstIndex = firstOcc(arr,7,3);
    int secondIndex = lastOcc(arr,7,3);

    int TotalOcc = (secondIndex - firstIndex)  + 1 ;

    cout << "The total number of occurences are : " << TotalOcc << endl;
}