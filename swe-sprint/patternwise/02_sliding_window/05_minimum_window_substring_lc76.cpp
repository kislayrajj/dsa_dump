#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t);

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << minWindow(s, t);

    return 0;
}

string minWindow(string s, string t)
{
    int left = 0;
    int minLen = INT_MAX;
    int startingIdx = 0;
    vector<int> frequencyHash(128, 0);
    int n = s.size();
    int m = t.size();
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        frequencyHash[t[i]]++;
    }

    for (int right = 0; right < n; right++)
    {
        if (frequencyHash[s[right]] > 0)
            count++;

        frequencyHash[s[right]]--;

        while (count == m)
        {
            if ((right - left + 1) < minLen)
            {
                minLen = right - left + 1;
                startingIdx = left;
            }

            frequencyHash[s[left]]++;
            if (frequencyHash[s[left]] > 0)
                count--;

            left++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(startingIdx, minLen);
}