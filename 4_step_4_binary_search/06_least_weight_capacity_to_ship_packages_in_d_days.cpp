#include <bits/stdc++.h>
using namespace std;

int getMaxElement(vector<int> &weights);
int getTotalWeight(vector<int> &weights);
bool possibility(vector<int> &weights, int capacity, int days);
int leastWeightCapacityToShipPackages(vector<int> &weights, int days);

int main()
{
    // vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int days = 5;

    // vector<int> weights = {3, 2, 2, 4, 1, 4};
    // int days = 3;

    vector<int> weights = {1,2,3,1,1};
    int days = 4;

    int result = leastWeightCapacityToShipPackages(weights, days);
    cout << result << endl;

    return 0;
}

int getMaxElement(vector<int> &weights)
{
    int maxElement = weights[0];

    for (int i = 0; i < weights.size(); i++)
    {
        if (weights[i] > maxElement)
        {
            maxElement = weights[i];
        }
    }

    return maxElement;
}

int getTotalWeight(vector<int> &weights)
{
    int totalWeight = 0;

    for (int i = 0; i < weights.size(); i++)
    {
        totalWeight += weights[i];
    }

    return totalWeight;
}

bool possibility(vector<int> &weights, int capacity, int days)
{
    int d = 1;
    long long sum = 0;

    for (int w : weights)
    {
        if (sum + w <= capacity)
        {
            sum += w;
        }
        else
        {
            d++;
            sum = w;
        }
    }
    return d <= days;
}

int leastWeightCapacityToShipPackages(vector<int> &weights, int days)
{
    int low = getMaxElement(weights);
    int high = getTotalWeight(weights);
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (possibility(weights, mid, days))
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