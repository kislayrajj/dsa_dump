#include <bits/stdc++.h>
using namespace std;

string removeAllOccurrences(string s, string part);

int main()
{
    // string s = "axxxxyyyyb";
    // string part = "xy";
    string s = "daabcbaabcbc";
    string part = "abc";


    string result = removeAllOccurrences(s, part);
    cout << result << endl;
    

    return 0;
}

string removeAllOccurrences(string s, string part)
{
    int n = part.size();

    while (s.find(part) != string::npos)
    {
        s.erase(s.find(part), n);
    }

    return s;
}
