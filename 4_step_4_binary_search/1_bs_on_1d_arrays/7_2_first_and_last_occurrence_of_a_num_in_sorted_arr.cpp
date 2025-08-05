#include <bits/stdc++.h>
using namespace std;

int getUpperBound(vector<int> &arr, int k);
int getLowerBound(vector<int> &arr, int k);
vector<int> getFirstAndLastOccurrence(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    // int k = 8;
    int k = 6;
    vector<int> result = getFirstAndLastOccurrence(arr, k);
    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}

int getUpperBound(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, upperBound = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > k)
        {
            upperBound = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return upperBound;
}

int getLowerBound(vector<int> &arr, int k)
{
    int n = arr.size(), low = 0, high = n - 1, lowerBound = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= k)
        {
            lowerBound = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return lowerBound;
}

vector<int> getFirstAndLastOccurrence(vector<int> &arr, int k)
{
    int n = arr.size();
    int lowerBound = getLowerBound(arr, k);

    if (lowerBound == n || arr[lowerBound] != k)
    {
        return {-1, -1};
    }
    else
    {
        return {lowerBound, getUpperBound(arr, k) - 1};
    }
}