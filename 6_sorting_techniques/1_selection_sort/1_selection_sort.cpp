#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n);

int main()
{
    int arr[] = {9, 12, 2, 4, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[j], arr[i]);
        }
    }
}