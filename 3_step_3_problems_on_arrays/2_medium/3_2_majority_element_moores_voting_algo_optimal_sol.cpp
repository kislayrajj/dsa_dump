#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr);

int main()
{
    vector<int> a = {2, 2, 1, 1, 2, 1, 1, 1};
    int result = majorityElement(a);
    cout << result << endl;
    return 0;
}

int majorityElement(vector<int> &a)
{
    int count1 = 0, count2 = 0, n = a.size(), el;

    for (int i = 0; i < n; i++)
    {
        if (count1 == 0)
        {
            count1 = 1;
            el = a[i];
        }
        else if (a[i] == el)
        {
            count1++;
        }
        else
        {
            count1--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == el)
            count2++;
    }
    if (count2 > n / 2)
        return el;
    return -1;
}