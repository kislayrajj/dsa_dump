#include <bits/stdc++.h>
using namespace std;

bool isValidAnagram(string &s, string &t);

int main()
{
    // string s = "anagram";
    // string t = "nagaram";
    string s = "car";
    string t = "ram";

    bool result = isValidAnagram(s, t);
    cout << result << endl;

    return 0;
}

bool isValidAnagram(string &s, string &t)
{
    if (s.size() != t.size())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}