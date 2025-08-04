#include <bits/stdc++.h>
using namespace std;

vector<int> getNextPermutation(vector<int> &arr);

int main()
{
    vector<int> a = {3, 2, 1};
    vector<int> result = getNextPermutation(a);
    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}

vector<int> getNextPermutation(vector<int> &a)
{
    int idx = -1;
    int n = a.size();

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }

    for (int i = n - 1; i > idx; i--)
    {
        if (a[i] > a[idx])
        {
            swap(a[i], a[idx]);
            break;
        }
    }

    reverse(a.begin() + idx + 1, a.end());
    return a;
}