#include <bits/stdc++.h>
using namespace std;

// best time to buy and sell stock problem

int maxProfit(vector<int> &arr);

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};

    int result = maxProfit(arr);
    cout << result << endl;
    return 0;
}

int maxProfit(vector<int> &arr)
{
    int minAmount = arr[0], maxProfit = 0, cost = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        cost = arr[i] - minAmount;
        maxProfit = max(maxProfit, cost);
        minAmount = min(minAmount, arr[i]);
    }

    return maxProfit;
}