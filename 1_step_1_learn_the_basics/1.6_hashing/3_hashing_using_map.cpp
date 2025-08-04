#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-compute
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << ": " << it.second << endl;
    }

    // query
    int q;
    cout << "Enter number queries: ";
    cin >> q;
    cout << "Enter queries: ";
    while (q--)
    {
        int number;
        cin >> number;

        // fetch
        cout << mp[number] << endl;
    }
}