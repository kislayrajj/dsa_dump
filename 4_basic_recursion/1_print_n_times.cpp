#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n, int m);

int main()
{
    int m = 5;
    printNTimes(1, m);
    return 0;
}

void printNTimes(int n, int m)
{
    if (n > m)
        return;
    printNTimes(n + 1, m);
    cout << " KR" << endl;
}