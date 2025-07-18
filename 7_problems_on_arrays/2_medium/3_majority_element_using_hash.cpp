#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int> &arr);

int main()
{
    vector<int> a = {2,2,1,1,1,1,1,2,2};
    int result = findMajorityElement(a);
    cout << result << endl;
    return 0;
}

int findMajorityElement(vector<int> &a)
{
    unordered_map<int, int> mp;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    for (auto pair:mp)
    {
        if (pair.second > n / 2)
        {
            return  pair.first;
        }
    }

    return -1;
}