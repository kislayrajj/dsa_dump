#include <bits/stdc++.h>
using namespace std;

int getMaxElement(vector<int> &arr);
int getCurrentSum(vector<int> &arr, int &num);
int findSmallestDivisor(vector<int> &arr, int &threshold);

int main()
{
    // vector<int> arr = {1, 2, 5, 9};
    // int threshold = 6;
    vector<int> arr = {44,22,33,11,1};
    int threshold = 5;

    int result = findSmallestDivisor(arr, threshold);
    cout << result << endl;

    return 0;
}

int getMaxElement(vector<int> &arr)
{
    int maxElement = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int getCurrentSum(vector<int> &arr, int &num)
{
    int currentSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += (arr[i] + num - 1) / num;
    }

    return currentSum;
}

int findSmallestDivisor(vector<int> &arr, int &threshold)
{
    int low = 1, high = getMaxElement(arr), ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int currentSum = getCurrentSum(arr, mid);
        if (currentSum <= threshold)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}