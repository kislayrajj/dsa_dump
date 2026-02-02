#include <bits/stdc++.h>
using namespace std;

bool isFreqSame(int freq[], int windFreq[]);
bool isPermutation(string s1, string s2);

int main()
{
    string s1 = "ab";
    // string s2 = "eidbaooo";
    string s2 = "eidboaoo";

    bool result = isPermutation(s1, s2);
    cout << result << endl;

    return 0;
}

bool isFreqSame(int freq[], int windFreq[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != windFreq[i])
        {
            return false;
        }
    }

    return true;
}

bool isPermutation(string s1, string s2)
{
    int sizeOfS1 = s1.size(), sizeOfS2 = s2.size();
    int freq[26] = {0};

    for (int i = 0; i < sizeOfS1; i++)
    {
        freq[s1[i] - 'a']++;
    }

    int windSize = sizeOfS1;

    for (int i = 0; i < sizeOfS2; i++)
    {
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while (windIdx < windSize && idx < sizeOfS2)
        {
            windFreq[s2[idx] - 'a']++;
            idx++;
            windIdx++;
        }

        if (isFreqSame(freq, windFreq))
        {
            return true;
        }
    }

    return false;
}