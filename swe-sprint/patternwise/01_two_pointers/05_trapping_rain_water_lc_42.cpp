#include <bits/stdc++.h>
using namespace std;

int trapRainWater(vector<int> &arr);

int main()
{
    // vector<int> arr = {4, 2, 0, 3, 2, 5};
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trapRainWater(arr);

    return 0;
}

// int trapRainWater(vector<int> &arr)
// {
//     int ans = 0, n = arr.size();
//     vector<int> prefix(n), suffix(n);

//     prefix[0] = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = max(prefix[i - 1], arr[i]);
//     }

//     suffix[n - 1] = arr[n - 1];

//     for (int i = n - 2; i >= 0; i--)
//     {
//         suffix[i] = max(suffix[i + 1], arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         ans += min(prefix[i], suffix[i]) - arr[i];
//     }

//     return ans;
// }

// optimal solution with constant space

int trapRainWater(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j = n - 1;
    int maxL = arr[i], maxR = arr[j];
    int ans = 0;

    while (i < j)
    {
        if (maxL <= maxR)
        {
            i++;
            if (arr[i] < maxL)
            {
                ans += maxL - arr[i];
            }
            else
            {
                maxL = arr[i];
            }
        }
        else
        {
            j--;
            if (arr[j] < maxR)
            {
                ans += maxR - arr[j];
            }
            else
            {
                maxR = arr[j];
            }
        }
    }

    return ans;
}