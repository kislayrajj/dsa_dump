#include <bits/stdc++.h>
using namespace std;

string reverseWordsInAString(string &s);

int main()
{
    // string s = " hello world ";
    // string s = "the sky is blue";
    string s = "a good   example";
    string result = reverseWordsInAString(s);
    cout << result << endl;

    return 0;
}

string reverseWordsInAString(string &s)
{
    string rev = "";
    int i = s.size();

    while (i >= 0)
    {
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }

        if (i < 0)
            break;
        int end = i;

        while (i >= 0 && s[i] != ' ')
        {
            i--;
        }

        string word = s.substr(i + 1, end - i);

        if (!rev.empty())
        {
            rev += ' ';
        }

        rev += word;
    }

    return rev;
}