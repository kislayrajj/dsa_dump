#include <bits/stdc++.h>
using namespace std;

// optimal solution

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2);

int main()
{
    // vector<int> arr1 = {1, 2, 3, 4, 5};
    // vector<int> arr2 = {0, 2, 3, 4, 5, 6, 7};
    vector<int> arr1 = {1, 1, 2, 3, 4, 5, 10, 11, 12, 15, 16, 17, 18, 19};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 13, 14};
    vector<int> unionArr = findUnion(arr1, arr2);

    for (auto it : unionArr)
    {
        cout << it << " ";
    }

    return 0;
}

vector<int> findUnion(vector<int> &a1, vector<int> &a2)
{
    vector<int> unionArr;
    int n1 = a1.size();
    int n2 = a2.size();
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a1[i])
            {
                unionArr.push_back(a1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != a2[j])
            {
                unionArr.push_back(a2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a1[i])
        {
            unionArr.push_back(a1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != a2[j])
        {
            unionArr.push_back(a2[j]);
        }
        j++;
    }

    return unionArr;
}