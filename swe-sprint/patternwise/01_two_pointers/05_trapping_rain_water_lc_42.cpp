#include <bits/stdc++.h>
using namespace std;

int trapRainWater(vector<int> &arr);

int main()
{
    vector<int> arr = {4, 2, 0, 3, 2, 5};
    cout << trapRainWater(arr);

    return 0;
}

int trapRainWater(vector<int> &arr)
{
    int ans = 0, n = arr.size();
    vector<int> prefix(n), suffix(n);

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = max(prefix[i - 1], arr[i]);
    }

    suffix[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = max(suffix[i + 1], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += min(prefix[i], suffix[i]) - arr[i];
    }

    return ans;
}