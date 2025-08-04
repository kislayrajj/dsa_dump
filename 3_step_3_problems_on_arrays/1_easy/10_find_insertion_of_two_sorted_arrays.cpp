#include <bits/stdc++.h>
using namespace std;

// optimal solution

vector<int> findInsertion(vector<int> &arr1, vector<int> &arr2);

int main()
{
    // vector<int> arr1 = {1, 2, 3, 4, 5};
    // vector<int> arr2 = {0, 2, 3, 4, 5, 6, 7};
    vector<int> arr1 = {1, 1, 2, 3, 4, 5, 10, 11, 12, 15, 16, 17, 18, 19};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 13, 14};
    vector<int> insertionArr = findInsertion(arr1, arr2);

    for (auto it : insertionArr)
    {
        cout << it << " ";
    }

    return 0;
}

vector<int> findInsertion(vector<int> &a1, vector<int> &a2)
{
    vector<int> insertionArr;
    int n1 = a1.size();
    int n2 = a2.size();
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a1[i])
        {
            j++;
        }
        else
        {
            insertionArr.push_back(a1[i]);
            i++;
            j++;
        }
    }

    return insertionArr;
}