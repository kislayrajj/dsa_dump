#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(vector<int> &arr);

int main()
{
    vector<int> arr = {2, 2, 2, 1, 3};
    cout << longestConsecutiveSequence(arr);

    return 0;
}

int longestConsecutiveSequence(vector<int> &arr)
{
    unordered_set<int> st;
    int longestSequence = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        st.insert(arr[i]);
    }

    for (int x : st)
    {
        int count = 0;

        if (st.find(x - 1) == st.end())
        {
            count++;
            while (st.find(++x) != st.end())
                count++;
            longestSequence = max(longestSequence, count);
        }
    }

    return longestSequence;
}