#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    cout << "\nEnter query size: ";
    int q;
    cin >> q;
    cout << "\nEnter queries: ";

    while (q--)
    {
        int num;
        cin >> num;
        // fetch
        cout << num << ": " << hash[num] << endl;
    }
}