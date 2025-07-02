#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s);

int main()
{
    string s = "A man, a plan, a canal: Panama";
    // string s = "race a car";
    isPalindrome(s);
    cout << (isPalindrome(s) ? "True" : "False") << endl;
    return 0;
}

bool isPalindrome(string s)
{
    string std = "";
    for (char c : s)
    {
        if (isalnum(c))
        {

            std += tolower(c);
        }
    }

    int start = 0;
    int end = std.size() - 1;

    while (start <= end)
    {
        if (start != end)
        {
            return false;
        }
        start++;
        end--;
    }
    cout << std << endl;
    return true;
}