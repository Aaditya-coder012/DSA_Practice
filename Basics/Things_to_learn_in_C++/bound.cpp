#include<bits/stdc++.h>
using namespace std;

int firstOcc(int even[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1; // initialize the ans : (-1) as rough value 
    while(start <= end){
        if(key == even[mid]){
            ans = mid; // initialize the value of ans as middle number
            end = mid - 1; // for first occurence start the count from term 0 to before middle number term
        }
        else if(key > even[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;    
}

int lastOcc(int even[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1; // initialize the ans : (-1) as rough value
    while(start <= end){
        if(key == even[mid]){
            ans = mid; // initialize the value of ans as middle number
            start = mid + 1; // for last occurence start the count from (middle + 1)th to end 
        }
        else if(key > even[mid]){
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
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};

    cout<<"First Occurence of 3 is at Index " << firstOcc(even,11,3) << endl;
    cout<<"last Occurence of 3 is at Index " << lastOcc(even,11,3) << endl;
}