#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[], int n);

int main()
{
    int arr[] = {1, 2,2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << (isArraySorted(arr, n) ? "Yes, Array is sorted." : "No Array is not sorted.") << endl;
    return 0;
}

bool isArraySorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}