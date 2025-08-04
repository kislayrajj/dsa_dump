#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& arr, int low, int high);
void merge(vector<int>& arr, int low, int mid, int high);

int main()
{
    vector<int> arr = {3, 2, 4, 1, 3};
    int low = 0;
    int high = arr.size() - 1;
    cout << "Org array (unsorted): ";
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, low, high);
    cout << "\nSorted array (Merge Sort): ";
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void mergeSort(vector<int>& arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}