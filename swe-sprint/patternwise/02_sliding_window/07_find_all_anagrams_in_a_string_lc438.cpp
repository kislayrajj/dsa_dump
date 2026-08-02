#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p);

int main()
{
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);
    cout << "[";

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i != result.size() - 1)
        {
            cout<<", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

vector<int> findAnagrams(string s, string p)
{
    int n = s.size();
    int k = p.size();
    if (k > n)
        return {};

    int count = 0;
    int left = 0;
    vector<int> freq(26, 0);
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        freq[p[i] - 'a']++;
    }

    for (int i = 0; i < k; i++)
    {
        if (freq[s[i] - 'a'] > 0)
            count++;
        freq[s[i] - 'a']--;
    }

    if (count == k)
        ans.push_back(left);

    for (int right = k; right < n; right++)
    {
        if (freq[s[left] - 'a'] >= 0)
            count--;
        freq[s[left] - 'a']++;
        left++;

        if (freq[s[right] - 'a'] > 0)
            count++;
        freq[s[right] - 'a']--;

        if (count == k)
        {
            ans.push_back(left);
        }
    }

    return ans;
}