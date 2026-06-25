#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr);

int main()
{
    // vector<int> arr = {4, 1, 2, 0, 9, 0, 0, 3, 4, 0, 3, 0, 0, 12, 0, 0, 0, 1, 20, 10, 0, 0};
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeroes(arr);

    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i != arr.size() - 1)
            cout << ", ";
    }
    cout << "}";

    return 0;
}

void moveZeroes(vector<int> &arr)
{
    int i = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[i] != 0)
        {
            i++;
            continue;
        }
        else if (arr[i] == 0 && arr[j] == 0)
        {
            continue;
        }
        else if (arr[i] == 0 && arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
            continue;
        }
    }
}

// cleaner and shorter with same tc and sp

void moveZeroes(vector<int> &arr)
{
    int i = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}
