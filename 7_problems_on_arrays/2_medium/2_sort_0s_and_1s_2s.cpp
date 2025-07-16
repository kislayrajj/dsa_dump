#include <bits/stdc++.h>
using namespace std;

void sort0s1sand2s(vector<int> &arr);

int main()
{
    vector<int> arr = {2, 1, 2, 0, 1, 2, 0, 1, 0, 2};
    cout << "Org array (unsorted): ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    sort0s1sand2s(arr);
    cout << "\nSorted array (unsorted): ";
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}

void sort0s1sand2s(vector<int> &arr)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
        if (arr[i] == 2)
        {
            count2++;
        }
    }

    for (int i = 0; i < count0; i++)
        arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++)
        arr[i] = 1;
    for (int i = count0 + count1; i < arr.size(); i++)
        arr[i] = 2;
}