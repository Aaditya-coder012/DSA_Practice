#include<bits/stdc++.h> //TC:- nlogn(as we have sorted the array) + O(n*n) {first n is of for loop and second one for while loop}
using namespace std;
//Sc:- O(no. of triplets)
vector<vector<int>> find_triplets(vector<int> arr , int n , int k) {
    vector<vector<int>> ans;

    sort(arr.begin(),arr.end()); // sort the array for better calculation of triplets

    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue; // continue teh array if previous array is same as after one   also if i>0
        int left = i+1;//increase the count of from (i+1)th position 
        int  right= n-1;//start the count of right side from n-1
        while(left<right){//always hold for the condition left less than right array
            int sum = arr[i] + arr[left] + arr[right]; //check the sum should be addition of three
            if(sum<k){
                left++;
            } 
            else if (sum>k){
                right--;
            } 
            else 
            {
                ans.push_back ({arr[i], arr[left], arr[right]});
                left++;
                right--;

                while(left<right && arr[left] == arr[left-1]) left++;
                while(left<right && arr[right] == arr[right+1]) right--;
            }
        }
    }
    return ans;
}

int main(){
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int> arr (n);

    for(int i=0;i<n;i++){
        cout<<"Enter the array elements "<<i+1<<": ";
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the target sum for triplets:";
    cin>>k;

    vector<vector<int>> result = find_triplets(arr, n, k);

    if (result.empty()) {
        cout << "No triplets found with sum " << k << endl;
    } else {
        cout << "Triplets with sum " << k << " are:\n";
        for (auto &triplet : result) {
            cout << "[ " << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << " ]\n";
        }
    }

    return 0;
}