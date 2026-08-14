#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxSlidingWindow(arr, k);

    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i != result.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";

    return 0;
}

// // brute force solution
// vector<int> maxSlidingWindow(vector<int> &arr, int k)
// {
//     vector<int> ans;
//     int n = arr.size();

//     if (n == 1)
//     {
//         ans.push_back(arr[0]);
//         return ans;
//     }

//     for (int i = 0; i <= n - k; i++)
//     {
//         int maxInWin = INT_MIN;

//         for (int j = i; j < i + k; j++)
//         {
//             maxInWin = max(maxInWin, arr[j]);
//         }

//         ans.push_back(maxInWin);
//     }

//     return ans;
// }

// optimal solution using monotonic deque
vector<int> maxSlidingWindow(vector<int> &arr, int k)
{
    vector<int> ans;
    int n = arr.size();
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }

    return ans;
}