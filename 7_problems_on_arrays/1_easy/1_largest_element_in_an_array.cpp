#include <bits/stdc++.h>
using namespace std;

void printLargestElementInAnArray(int arr[], int n);

int main()
{
    int arr[] = {2, 4, 2, 5, 7, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printLargestElementInAnArray(arr, n);
    return 0;
}

void printLargestElementInAnArray(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest: " << largest << endl;
}
