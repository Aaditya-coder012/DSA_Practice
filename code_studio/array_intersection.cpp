#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
      vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++; // Move pointer for smaller element
        }
        else if (arr1[i] > arr2[j]) {
            j++; // Move pointer for larger element
        }
        else {
            ans.push_back(arr1[i]); // Found common element
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    int n,m;
    cout << "Enter n (size of first array): ";
    cin >> n;
    cout << "Enter m (size of second array): ";
    cin >> m;
    
    vector<int> arr1(n), arr2(m);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> intersection = findArrayIntersection(arr1, n, arr2, m);
    
    // Output the intersection array
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;

    return 0;
}