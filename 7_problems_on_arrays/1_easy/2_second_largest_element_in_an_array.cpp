#include <bits/stdc++.h>
using namespace std;

void printSecondLargestElementInAnArray(int arr[], int n);

int main()
{
    int arr[] = {2, 32, 203, 19, 2, 3, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSecondLargestElementInAnArray(arr, n);
    return 0;
}

void printSecondLargestElementInAnArray(int arr[], int n)
{
    // brute force
    // sort(arr, arr + n);
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (arr[i] < arr[n - 1])
    //     {

    //         cout << arr[i];
    //         return;
    //     }
    // }

    // better

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest << endl;
}
