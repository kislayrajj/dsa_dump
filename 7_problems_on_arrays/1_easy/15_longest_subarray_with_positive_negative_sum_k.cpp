#include <bits/stdc++.h>
using namespace std;

int findLongestSubArr(vector<int> &a, int k);

int main()
{
    // vector<int> a = {1, 2, 3, 1, 1, 1, 4, 5,-10,-2};
    vector<int> a = {1, -1, -2, 5, -2, 3};
    int k = 3;
    int result = findLongestSubArr(a, k);
    cout << result << endl;
    return 0;
}

int findLongestSubArr(vector<int> &a, int k)
{
    unordered_map<int, int> prefixSumIndex;
    int sum = 0, longestSubArr = 0, n = a.size();

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            longestSubArr = i + 1;
        }

        if (prefixSumIndex.find(sum - k) != prefixSumIndex.end())
        {
            longestSubArr = max(longestSubArr, i - prefixSumIndex[sum - k]);
        }

        if (prefixSumIndex.find(sum) == prefixSumIndex.end())
        {
            prefixSumIndex[sum] = i;
        }
    }

    return longestSubArr;
}