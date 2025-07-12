#include <bits/stdc++.h>
using namespace std;

// brute force solution
vector<int> findUnion(vector<int> &arr1, vector<int> &arr2);

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {0, 2, 3, 4, 5, 6, 7};
    vector<int> unionArr = findUnion(arr1, arr2);

    for (auto it : unionArr)
    {
        cout << it << " ";
    }

    return 0;
}

vector<int> findUnion(vector<int> &a1, vector<int> &a2)
{
    set<int> temp;
    for (int x : a1)
    {
        temp.insert(x);
    }
    for (int x : a2)
    {
        temp.insert(x);
    }
    vector<int> unionArr;
    unionArr.insert(unionArr.begin(), temp.begin(), temp.end());
    return unionArr;
}