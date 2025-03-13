#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairsum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // Note: sort(arr.begin(), arr.end()) was moved out of return statement
    // and is actually not needed here since we're sorting pairs individually but as we got in online coding platform there we need to do sorting
    return ans;
}

int main()
{
    int s;
    cout << "Enter the pair sum number: ";
    cin >> s;

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Better to use vector instead of VLA (Variable Length Array)
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << i + 1 << ": ";
        cin >> arr[i];
    }

    vector<vector<int>> sum = pairsum(arr, s);

    // Output the pairs
    cout << "Pairs summing to " << s << ":\n";
    if (sum.empty())
    {
        cout << "No pairs found\n";
    }
    else
    {
        for (int i = 0; i < sum.size(); i++)
        {
            cout << "(" << sum[i][0] << ", " << sum[i][1] << ") ";
        }
        cout << endl;
    }

    return 0;
}