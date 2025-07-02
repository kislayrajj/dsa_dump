#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int n);

int main()
{
    string s = "MADAM";
    int n = s.size();
    int i = 0;
    cout << (isPalindrome(s, i, n - 1) ? "true" : "false") << endl;
    return 0;
}

bool isPalindrome(string s, int i, int n)
{

    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i])
        return false;
    return isPalindrome(s, i + 1, n);
}