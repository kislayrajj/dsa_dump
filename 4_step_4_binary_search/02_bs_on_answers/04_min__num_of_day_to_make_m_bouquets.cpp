#include <bits/stdc++.h>
using namespace std;

int getMinDay(vector<int> &bloomDay);
int getMaxDay(vector<int> &bloomDay);
bool possibility(vector<int> &bloomDay, int &day, int &m, int &k);
int minNumOfDaysToMakeMBouquets(vector<int> &bloomDay, int &m, int &k);

int main()
{
    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    int m = 2;
    int k = 3;

    int result = minNumOfDaysToMakeMBouquets(bloomDay, m, k);
    cout << result << endl;

    return 0;
}

int getMinDay(vector<int> &bloomDay)
{
    int minDay = INT_MAX;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] < minDay)
        {
            minDay = bloomDay[i];
        }
    }

    return minDay;
}

int getMaxDay(vector<int> &bloomDay)
{
    int maxDay = INT_MIN;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] > maxDay)
        {
            maxDay = bloomDay[i];
        }
    }

    return maxDay;
}

bool possibility(vector<int> &bloomDay, int &day, int &m, int &k)
{
    int count = 0, bouquet = 0;

    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= day)
        {
            count++;
        }
        else
        {
            bouquet = count / k;
            count = 0;
        }
    }

    bouquet += count / k;

    if (bouquet >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int minNumOfDaysToMakeMBouquets(vector<int> &bloomDay, int &m, int &k)
{
    int low = getMinDay(bloomDay), high = getMaxDay(bloomDay), ans = 0;
    int n = bloomDay.size();

    if ((m * k) > n)
    {
        return ans;
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (possibility(bloomDay, mid, m, k))
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