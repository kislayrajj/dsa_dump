#include <bits/stdc++.h>
using namespace std;

int maxLength(string s);

int main()
{
    string s = "abcabcbb";
    cout << maxLength(s);

    return 0;
}

int maxLength(string s)
{
    int l = 0, mxl = 0;
    vector<int> lastIdx(256, -1);

    for (int r = 0; r < s.size(); r++)
    {
        if (lastIdx[s[r]] >= l)
        {
            l = lastIdx[s[r]] + 1;
        }

        // update maximum length
        mxl = max(mxl, r - l + 1);

        // store latest index of current character
        lastIdx[s[r]] = r;
    }

    return mxl;
}