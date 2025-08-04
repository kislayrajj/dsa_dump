#include <bits/stdc++.h>
using namespace std;

// optimal solution for rotating array
// tc: O(n)
// sc: O(1)

void rotateArr(vector<int> &arr, int k);
void revArr(vector<int> &arr, int start, int end);

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    cout << "Org array: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    rotateArr(a, k);
    cout << "\nRotated Array by " << k << " place(s): ";
    for (auto it : a)
    {
        cout << it << " ";
    }
}

void rotateArr(vector<int> &arr, int k)
{
    int n = arr.size();
    revArr(arr, 0, k - 1);
    revArr(arr, k, n - 1);
    revArr(arr, 0, n - 1);
}

void revArr(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}