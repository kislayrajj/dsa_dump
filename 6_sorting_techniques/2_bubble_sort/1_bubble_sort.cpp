#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr);

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9, 234, 23, 21, 122312, 1232, 123};
    // vector<int> arr = {1, 4, 3, 2, 5};
    // vector<int> arr = {1,2,3,4,5};
    cout << "Org arr (unsorted): ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }

    bubbleSort(arr);
    cout << "\nSorted arr: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}

void bubbleSort(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool didSwap = false;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        count++;
        if (!didSwap)
        {
            break;
        }
    }
    cout << "\nNo. of iterations: " << count;
}