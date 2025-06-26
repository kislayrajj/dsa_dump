#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n);
bool custom_comp(pair<int, int> p1, pair<int, int> p2);
int main()
{
    int arr[] = {3, 2, 14, 5, 14, 3, 53, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, n);

    return 0;
}

bool custom_comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        if (p1.first > p2.first)
            return true;
    }
    return false;
}

void sorting(int arr[], int n)
{
    // sort(arr, arr + n);
    // sort to certain range
    // sort(arr+(n/2), arr + n);
    // sort(arr+(n/2), arr + n, greater<int>());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element, if second element is same, then sort it according to first element but in descending.
    int m = sizeof(a) / sizeof(a[0]); // size of a[]

    sort(a, a + m, custom_comp);
    for (int i = 0; i < m; ++i)
    {
        cout << "(" << a[i].first << ", " << a[i].second << ") ";
    }
}