#include <bits/stdc++.h>
using namespace std;

void explain_popcount();

int main()
{
    explain_popcount();
    return 0;
}

void explain_popcount()
{
    int num = 5;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl;
}
 