#include <bits/stdc++.h>
using namespace std;

// brute force solution (Linear search)
int findPeakElement(vector<int> &arr);

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int result = findPeakElement(arr);
    cout << result;

    return 0;
}

int findPeakElement(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1)
        return 0;

    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            return i;
        }
    }

    return -1;
}