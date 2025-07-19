#include <bits/stdc++.h>
using namespace std;

vector<int> maxSubArr(vector<int> &arr);

int main()
{
    // vector<int> a = {2, -1, -1, 3, 4, 5};
    // vector<int> a = {5,4,-1,7,8};
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> result = maxSubArr(a);
    cout << "Longest SubArray: ";
    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}

vector<int> maxSubArr(vector<int> &arr)
{
    int max = INT_MIN, sum = 0, start = 0, maxSubArrStart = -1, maxSubArrEnd = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum = sum + arr[i];
        if (sum > max)
        {
            max = sum;
            maxSubArrStart = start;
            maxSubArrEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Sum of maximum sub array: " << max << endl;

    vector<int> maxSubArr;
    for (int i = maxSubArrStart; i <= maxSubArrEnd; i++)
    {
        maxSubArr.push_back(arr[i]);
    }

    return maxSubArr;
}
