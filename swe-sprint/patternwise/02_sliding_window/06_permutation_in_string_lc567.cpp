#include <bits/stdc++.h>
using namespace std;

bool isPermutationPresent(string s1, string s2);

int main()
{
    string s1 = "cba";
    string s2 = "abc";

    cout << isPermutationPresent(s1, s2);

    return 0;
}

bool isPermutationPresent(string s1, string s2)
{
    int left = 0;
    int count = 0;
    vector<int> frequencyHash(26, 0);
    int k = s1.size();
    int n = s2.size();

    if (k > n)
        return false;

    for (int i = 0; i < k; i++)
    {
        frequencyHash[s1[i] - 'a']++;
    }

    for (int i = 0; i < k; i++)
    {
        if (frequencyHash[s2[i] - 'a'] > 0)
            count++;

        frequencyHash[s2[i] - 'a']--;
    }

    if (count == k)
        return true;

    for (int right = k; right < n; right++)
    {
        if (frequencyHash[s2[left] - 'a'] >= 0)
            count--;

        frequencyHash[s2[left] - 'a']++;
        left++;

        if (frequencyHash[s2[right] - 'a'] > 0)
            count++;

        frequencyHash[s2[right] - 'a']--;

        if (count == k)
            return true;
    }

    return false;
}