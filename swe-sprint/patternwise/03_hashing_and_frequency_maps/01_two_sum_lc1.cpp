#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target);

int main()
{
    // vector<int> arr = {2, 7, 11, 15};
    // vector<int> arr = {3, 2, 4};
    // vector<int> arr = {2, 3, 4};
    vector<int> arr = {12, 15, 11, 19, 7, 3, 14, 8, 13, 6, 8};

    // vector<int> arr = {12, 5, 18, 19, 7, 3};
    // int target = 22;
    // int target = 9;
    // int target = 7;
    int target = 20;
    vector<int> ans = twoSum(arr, target);
    cout << "{";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "}";
    return 0;
}

// brute force
// vector<int> twoSum(vector<int> &arr, int target)
// {
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

// optimal solution

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end())
        {
            return {mp[complement], i};
        }
        mp[arr[i]] = i;
    }

    return {};
}