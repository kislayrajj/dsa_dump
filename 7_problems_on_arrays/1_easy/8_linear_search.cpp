#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int k);

int main()
{
    vector<int> a = {4, 5, 2, 3, 1};
    int k = 1;
    // int k = 15;
    int result = linearSearch(a, k);
    cout << result << endl;
    return 0;
}

int linearSearch(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }

    return -1;
}