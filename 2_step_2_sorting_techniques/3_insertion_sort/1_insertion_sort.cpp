#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr);

int main()
{
    vector<int> arr = {14, 9, 15, 12, 6, 8, 13};
    cout << "Org arr (unsorted): ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nSorted arr (Insertion Sort ): ";

    insertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void insertionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}