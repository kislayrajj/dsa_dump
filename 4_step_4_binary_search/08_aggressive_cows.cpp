#include <bits/stdc++.h>
using namespace std;

int canWePlace(vector<int> &arr, int distance, int k);
int aggressiveCows(vector<int> &arr, int k);

int main()
{
    // vector<int> arr = {0, 3, 4, 9, 7, 10};
    // int k = 4;
    vector<int> arr = {4, 2, 1, 3, 6};
    int k = 2;

    int result = aggressiveCows(arr, k);
    cout << result << endl;

    return 0;
}

int canWePlace(vector<int> &arr, int distance, int k)
{
    int countCows = 1, lastCow = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] - lastCow >= distance)
        {
            countCows++;
            lastCow = arr[i];
        }
    }

    return countCows >= k;
}

int aggressiveCows(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int low = 0, high = arr[arr.size() - 1] - arr[0];
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (canWePlace(arr, mid, k))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}