#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target);

int main()
{
    vector<int> a = {2, 7, 11, 15, 2, 3, 23, 3, 23, 32};
    int target = 26;
    vector<int> result = twoSum(a, target);
    if (!result.empty())
    {
        for (auto it : result)
        {

            cout << it << " ";
        }
    }
    else
    {
        cout << "Not found!";
    }

    return 0;
}

vector<int> twoSum(vector<int> &a, int t)
{
    unordered_map<int, int> mp;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int more = t - a[i];

        if (mp.find(more) != mp.end())
        {
            return {mp[more], i};
        }
        mp[a[i]] = i;
    }
    return {};
}
