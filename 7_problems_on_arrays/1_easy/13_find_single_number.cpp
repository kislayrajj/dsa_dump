#include <bits/stdc++.h>
using namespace std;

int findSingleNum(vector<int> &arr);

int main()
{
    vector<int> a = {1, 2, 1, 2, 4};
    int result = findSingleNum(a);
    cout << result << endl;
    return 0;
}

int findSingleNum(vector<int> &arr)
{
    int n = arr.size();

    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }

    return xorr;
}