#include <bits/stdc++.h>
using namespace std;

int findMissingNumberInArr(vector<int> &arr);

int main()
{
    vector<int> arr = {3, 2, 1, 4, 5,0};
    int result = findMissingNumberInArr(arr);
    cout << result << endl;
    return 0;
}

int findMissingNumberInArr(vector<int> &arr)
{
    int n = arr.size();
    int missingNum = 0;
    int count = 0;
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
        {
            count += arr[i];
        }
        total += i;
    }

    // cout << "count: " << count << endl;
    // cout << "total: " << total << endl;

    missingNum = total - count;
    if (missingNum)
    {
        return missingNum;
    }
    else
    {
        return -1;
    }
}