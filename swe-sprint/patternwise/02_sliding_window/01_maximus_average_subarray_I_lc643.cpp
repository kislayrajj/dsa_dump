#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double result = findMaxAverage(arr, k);
    cout << result << endl;

    return 0;
}

double findMaxAverage(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
   int maxSum = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        maxSum = max(maxSum, sum);
    }

    return double(maxSum)/k;
}