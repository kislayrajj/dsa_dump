#include <bits/stdc++.h>
using namespace std;

int getFirstOccurrence(vector<int> &arr, int k);
int getLastOccurrence(vector<int> &arr, int k);
int getNumberOfOccurrence(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {2, 4, 8, 8, 8, 8, 11, 13};
    int k = 8;
    int result = getNumberOfOccurrence(arr, k);
    cout << result << endl;
    return 0;
}

int getFirstOccurrence(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, firstOccurrence = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= k)
        {
            firstOccurrence = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return firstOccurrence;
}

int getLastOccurrence(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, lastOccurrence = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > k)
        {
            lastOccurrence = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return lastOccurrence;
}

int getNumberOfOccurrence(vector<int> &arr, int k)
{
    int n = arr.size();
    int firstOccurrence = getFirstOccurrence(arr, k);

    if (firstOccurrence == n || arr[firstOccurrence] != k)
    {
        return 0;
    }

    return getLastOccurrence(arr, k) - firstOccurrence;
}