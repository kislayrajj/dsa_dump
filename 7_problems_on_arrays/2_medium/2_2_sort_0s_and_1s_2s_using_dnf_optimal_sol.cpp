#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &arr);

int main()
{
    vector<int> a = {1, 2, 0, 0, 1, 2, 0, 2, 2, 1, 1, 0, 0};
    cout << "Org Array (Unsorted): ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    sortArr(a);
    cout << "\nSorted Array (using DNF Algo): ";
    for (auto it : a)
    {
        cout << it << " ";
    }

    return 0;
}

void sortArr(vector<int> &a)
{
    int low = 0, mid = 0, high = a.size()-1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}