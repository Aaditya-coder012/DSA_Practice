#include<bits/stdc++.h>
using namespace std;
int sum(int num[],int n){
    int sum_of_array = 0;
    for(int i=0;i<n;i++){
       sum_of_array+=num[i];
    }   
    return sum_of_array;
}

int main(){
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of array : ";
        cin>>num[i];
    }
    int sum_of_array = sum(num,n);
    cout<<"Sum of array Element is "<<sum_of_array<<endl;
}