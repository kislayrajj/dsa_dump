#include <bits/stdc++.h>
using namespace std;

void explain_next_permutation();

int main()
{
    explain_next_permutation();
    return 0;
}

void explain_next_permutation()
{
    // string s = "1234";
    // string s = "abc";
    string s = "312"; // must be sorted to print all the permutations
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}