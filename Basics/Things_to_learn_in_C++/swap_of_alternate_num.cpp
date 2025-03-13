#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
        //another swapping method
// void swapalternate(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1 < size){
//             int temp = arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;   
//         }
//     }
// }

int main(){
    int odd [5] = { 11, 33, 9, 76, 43};
    int even [8] = {5,2,9,4,7,6,1,0};

    swapAlternate(even,8);
    printarray(even,8);

    cout<<endl;

    swapAlternate(odd,5);
    printarray(odd,5);
    return 0;
}