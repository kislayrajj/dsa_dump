#include <bits/stdc++.h>
using namespace std;

// brute force solution (linear search)

vector<int> getFirstAndLastOccurrence(vector<int> &arr, int num);

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 12, 14};
    int num = 114;
    vector<int> result = getFirstAndLastOccurrence(arr, num);
    for (auto it : result)
    {
        cout << it << ' ';
    }
    return 0;
}

vector<int> getFirstAndLastOccurrence(vector<int> &arr, int num)
{
    int n = arr.size(), first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    return {first, last};
}