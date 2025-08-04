#include <bits/stdc++.h>
using namespace std;

int longestSubArr(vector<int> &arr, int k);

int main()
{
    vector<int> a = {1, 2, 4, 1, 1, 1, 1, 5};
    int k = 5;

    int result = longestSubArr(a, k);
    cout << result << endl;
    return 0;
}

int longestSubArr(vector<int> &a, int k)
{
    int n = a.size();
    int left = 0;
    int right = 0;
    int sum = a[0];
    int longestSubArr = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            longestSubArr = max(longestSubArr, right - left + 1);
        }

        right++;
        if (right < n)
            sum += a[right];
    }

    return longestSubArr;
}