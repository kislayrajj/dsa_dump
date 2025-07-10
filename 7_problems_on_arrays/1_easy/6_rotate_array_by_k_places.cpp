#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 6
    ;
    cout << "Org array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    rotateArray(arr, k);
    cout << "\nRotated array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}

void rotateArray(vector<int> &a, int k)
{
    int n = a.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }
    a = temp;
}