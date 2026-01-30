#include <bits/stdc++.h>
using namespace std;

string removeOutmostParentheses(string &s);

int main()
{
    // string s = "(()())(())";
    string s = "(()())(())(()(()))";
    string result = removeOutmostParentheses(s);
    cout << result << endl;

    return 0;
}

string removeOutmostParentheses(string &s)
{
    int count = 0;
    string ans = "";

    for (char c : s)
    {
        if (c == '(')
            count++;
        if (count > 1)
            ans += c;
        if (c == ')')
            count--;
    }

    return ans;
}