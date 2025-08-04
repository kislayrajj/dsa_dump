#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> &arr);

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout << "Org Array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    rotateArr(arr);
    cout << "\nRotated (left) Array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}

void rotateArr(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}