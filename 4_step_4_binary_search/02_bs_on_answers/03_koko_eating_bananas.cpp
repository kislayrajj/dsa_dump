#include <bits/stdc++.h>
using namespace std;

int findMaxElement(vector<int> &pile);
int findTotalHours(vector<int> &pile, int hourly);
int minHours(vector<int> &pile, int &h);

int main()
{
    vector<int> pile = {3, 6, 7, 11};
    int h = 8;

    int result = minHours(pile, h);
    cout << result << endl;

    return 0;
}

int findMaxElement(vector<int> &pile)
{
    int n = pile.size();
    int maxEl = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (pile[i] > maxEl)
        {
            maxEl = pile[i];
        }
    }
    return maxEl;
}

int findTotalHours(vector<int> &pile, int hourly)
{
    int n = pile.size();
    int totalHours = 0;

    for (int i = 0; i < n; i++)
    {
        totalHours = totalHours + ceil(pile[i] / hourly);
    }

    return totalHours;
}

int minHours(vector<int> &pile, int &h)
{
    int low = 1;
    int high = findMaxElement(pile);
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalHours = findTotalHours(pile, mid);

        if (totalHours <= h)
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