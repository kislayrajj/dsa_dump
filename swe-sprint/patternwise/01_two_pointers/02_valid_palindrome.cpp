#include <bits/stdc++.h>
using namespace std;

bool validPalindrome(string &s);

int main()
{
    string s = "A man, a plan, a canal: Panama";
    // string s = " ";
    // string  s = "race a car";

    cout << validPalindrome(s);

    return 0;
}

bool validPalindrome(string &s)
{
    string newS = "";

    for (char c : s)
    {
        if (isalnum(c))
        {
            newS += tolower(c);
        }
    }
    // cout << newS;
    int i = 0, j = newS.size()-1;

    if (newS.empty())
        return true;

    while (i < j)
    {
        if (newS[i] == newS[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}
