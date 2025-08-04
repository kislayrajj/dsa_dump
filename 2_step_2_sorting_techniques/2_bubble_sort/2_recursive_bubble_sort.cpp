#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int> &arr, int n);

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9, 234, 23, 21, 122312, 1232, 123};
    int n = arr.size();
    // vector<int> arr = {1, 4, 3, 2, 5};
    // vector<int> arr = {1,2,3,4,5};
    cout << "Org arr (unsorted): ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }

    recursiveBubbleSort(arr, n);
    cout << "\nSorted arr: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}

void recursiveBubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;
    bool didSwap = false;
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = true;
        }
    }
    if (!didSwap)
    {
        
        return;
    }
    recursiveBubbleSort(arr, n - 1);
}