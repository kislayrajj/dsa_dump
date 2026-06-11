#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &arr);

int main()
{
    // vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // vector<int> arr = {2,3,10,5,7,8,9};
    vector<int> arr = {8,7,6,5,4,3,2,1};
    cout << maxArea(arr);

    return 0;
}

int maxArea(vector<int> &arr)
{
    int ans = 0, i = 0, j = arr.size() - 1;

    while (i < j)
    {
        if (arr[i] < arr[j])
        {
            int sum = arr[i] * (j - i);

            if (sum > ans)
            {
                ans = sum;
            }
            i++;
        }
        else
        {
            int sum = arr[j] * (j - i);
            if (sum > ans)
            {
                ans = sum;
            }
            j--;
        }
    }

    return ans;
}