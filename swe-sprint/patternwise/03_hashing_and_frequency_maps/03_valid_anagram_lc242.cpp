#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t);

int main()
{
    string s = "anagram";
    string t = "nagaram";

    cout << isAnagram(s, t);

    return 0;
}

// brute force solution

// bool isAnagram(string s, string t)
// {
//     vector<int> sFreq(26, 0);
//     vector<int> tFreq(26, 0);

//     for (int i = 0; i < s.size(); i++)
//     {
//         sFreq[s[i] - 'a']++;
//     }

//     for (int i = 0; i < s.size(); i++)
//     {
//         tFreq[t[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (sFreq[i] != tFreq[i])
//         {
//             return false;
//         }
//     }

//     return true;
// }

// optimal sol

bool isAnagram(string s, string t)
{
    int n = s.size();
    int m = t.size();

    if (n != m)
        return false;

    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }

    return true;
}
