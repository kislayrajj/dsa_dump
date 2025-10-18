#include <bits/stdc++.h>
using namespace std;

//brute force solution 
int findSingleElementInSortedArr(vector<int> &arr);

int main()
{
    // vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    // vector<int> arr = {3,3,7,7,10,11,11};
    vector<int> arr = {3};
    int result = findSingleElementInSortedArr(arr);
    cout << result;
    return 0;
}

int findSingleElementInSortedArr(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
        else if (i == n - 1)
        {
            if (arr[i - 1] != arr[i])
            {
                return arr[i];
            }
        }
        else
        {
            if (arr[i - 1] != arr[i] && arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
    }

    return -1;
}
