#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &arr, int low, int high);
int correctPositionOfPivot(vector<int> &arr, int low, int high);

int main()
{
    vector<int> arr = {2, 34, 3, 2, 4, 54, 64, 2};
    int high = arr.size() - 1;
    cout << "Org arr (unsorted): ";
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, high);
    cout << "\nSorted arr (Quick Sort): ";
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition = correctPositionOfPivot(arr, low, high);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

int correctPositionOfPivot(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot)
        {
            i++;
        }
        while (j >= low && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}