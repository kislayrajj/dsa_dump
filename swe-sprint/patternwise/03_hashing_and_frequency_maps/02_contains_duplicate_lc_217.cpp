#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &arr);

int main()
{
    vector<int> arr = {1, 3, 2, 1};
    cout << containsDuplicate(arr);

    return 0;
}

bool containsDuplicate(vector<int> &arr)
{
    unordered_set<int> st;

    for (int i = 0; i < arr.size(); i++)
    {
        if (st.find(arr[i]) != st.end())
        {
            return true;
        }
        else
        {
            st.insert(arr[i]);
        }
    }

    return false;
}