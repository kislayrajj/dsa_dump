#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArr(vector<int> arr);

int main()
{
    vector<int> arr = {-2, 3, -3, 1, 1, -5};
    cout << "Org array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    vector<int> result = rearrangeArr(arr);
    cout << "\nRearranged array: ";
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}

vector<int> rearrangeArr(vector<int> a)
{
    int n = a.size(), positiveIdx = 0, negativeIdx = 1;
    vector<int> rearrangedArr(n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            rearrangedArr[positiveIdx] = a[i];
            positiveIdx += 2;
        }
        else
        {
            rearrangedArr[negativeIdx] = a[i];
            negativeIdx += 2;
        }
    }

    return rearrangedArr;
}
