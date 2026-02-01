#include <bits/stdc++.h>
using namespace std;

bool isValidAnagram(string s, string t);

int main()
{
    string s = "anagram";
    string t = "nagaram";

    bool result = isValidAnagram(s, t);
    cout << result << endl;

    return 0;
}

bool isValidAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int x : freq)
    {
        if (x != 0)
            return false;
    }

    return true;
}