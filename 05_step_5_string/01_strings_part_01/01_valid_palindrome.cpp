#include <bits/stdc++.h>
using namespace std;

bool isValidPalindrome(string &s);

int main()
{
    // string s = "A man, a plan, a canal: Panama";
    // string s = "race a car";
    string s = "";
    bool result = isValidPalindrome(s);
    cout << result << endl;

    return 0;
}

bool isValidPalindrome(string &s)
{
    for (char &c : s)
    {
        c = tolower(c);
    }

    string newStr = "";

    for (char c : s)
    {
        if (isalnum(c))
        {
            newStr.push_back(c);
        }
    }

    int i = 0, j = newStr.size() - 1;

    while (i < j)
    {
        if (newStr[i] != newStr[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}