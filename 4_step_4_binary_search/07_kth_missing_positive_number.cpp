#include <bits/stdc++.h>
using namespace std;

int findKthPositiveNumber(vector<int> &arr, int k);

int main()
{
    // vector<int> arr = {2, 3, 4, 7, 11};
    // int k = 5;

    // vector<int> arr = {1, 2, 3, 4};
    // int k = 2;

    vector<int> arr = {4, 7, 9, 10};
    int k = 4;

    //  vector<int> arr = {2};
    // int k = 1;

    int result = findKthPositiveNumber(arr, k);
    cout << result << endl;

    return 0;
}

int findKthPositiveNumber(vector<int> &arr, int k)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int missingNumber = arr[mid] - (mid + 1);

        if (missingNumber < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return k + high + 1;
}