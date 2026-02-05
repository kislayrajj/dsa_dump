#include <bits/stdc++.h>
using namespace std;

int compressString(vector<char> &chars);

int main()
{
    // vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // vector<char> chars = {'a'};
    vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b'};
    int result = compressString(chars);
    cout << result << endl;

    return 0;
}

int compressString(vector<char> &chars)
{
    int idx = 0, n = chars.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        char ch = chars[i];

        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;

            string str = to_string(count);

            for (char digit : str)
            {
                chars[idx++] = digit;
            }
        }
        i--;
    }

    return idx;
}