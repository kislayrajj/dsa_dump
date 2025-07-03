#include <bits/stdc++.h>
using namespace std;

void countFrequency(int arr[], int n, char frequency);

int main()
{
    int arr[] = {2, 3, 4, 1, 2, 3, 3, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    char frequency = 'l';
    countFrequency(arr, n, frequency);
    return 0;
}

void countFrequency(int arr[], int n, char frequency)
{

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int queryKey;
    int hFrequency = INT_MIN;
    int lFrequency = INT_MAX;

    if (frequency == 'h')
    {
        for (const auto &pair : mp)
        {
            if (pair.second > hFrequency)
            {
                hFrequency = pair.second;
                queryKey = pair.first;
            }
        }
        cout << "Highest Frequency (K:V): " << queryKey << ": " << hFrequency << endl;
    }
    else if (frequency == 'l')
    {
        for (const auto &pair : mp)
        {
            if (pair.second < lFrequency)
            {
                lFrequency = pair.second;
                queryKey = pair.first;
            }
        }
        cout << "Lowest Frequency (K:V): " << queryKey << ": " << lFrequency << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
}