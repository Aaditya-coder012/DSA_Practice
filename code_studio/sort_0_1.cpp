#include<bits/stdc++.h>
using namespace std;

void printing_array (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void sortOne (int arr[],int n){
    int left=0,right=n-1;
    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }

        while(arr[right] == 1 && left < right){
            right--;
        }

        //agar yah pahuch gye, iska matlab arr[left]=0 , arr[right]=1
        // Here we have used two pointer approach
        if(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[8]={0,1,0,0,0,0,1,1};

    sortOne(arr,8);
    printing_array(arr,8);
}