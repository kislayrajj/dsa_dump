#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr);

int main()
{
    // vector<int> arr = {1, 1, 2};
    // vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
vector<int> arr = {1, 2, 3, 4};

    cout << removeDuplicates(arr);

    return 0;
}

int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();

    if (n == 0)
        return n;

    int i = 1;

    for (int j = 1; j < n; j++)
    {
        if (arr[j] == arr[j - 1])
            continue;

        arr[i] = arr[j];
        i++;

    }

    return i;
}