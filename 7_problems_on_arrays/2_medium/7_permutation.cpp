#include <bits/stdc++.h>
using namespace std;

void getPermutation(vector<int> &arr, int idx, vector<vector<int>> &ans);

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    getPermutation(arr, 0, ans);
    for (const auto &row : ans)
    {
        for (const auto &val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

void getPermutation(vector<int> &arr, int idx, vector<vector<int>> &ans)
{
    int n = arr.size();
    if (idx == n)
    {
        ans.push_back(arr);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        swap(arr[idx], arr[i]);
        getPermutation(arr, idx + 1, ans);
        swap(arr[idx], arr[i]);
    }
}
