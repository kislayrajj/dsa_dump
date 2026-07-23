#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k);

int main()
{
    string s = "AABABBA";
    int k = 1;
    cout << characterReplacement(s, k);

    return 0;
}

int characterReplacement(string s, int k)
{
    int l = 0, maxLength = 0, maxfrequency = 0;
    vector<int> frequencyHash(26, 0);

    for (int r = 0; r < s.size(); r++)
    {
        frequencyHash[s[r] - 'A']++;
        maxfrequency = max(maxfrequency, frequencyHash[s[r] - 'A']);

        if (((r - l + 1) - maxfrequency) > k)
        {
            frequencyHash[s[l] - 'A']--;
            l++;
        }

        maxLength = max(maxLength, r - l + 1);
    }

    return maxLength;
}
