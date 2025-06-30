#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n);

int main()
{
    int n = 30;
    printNTimes(n);
    return 0;
}

void printNTimes(int n)
{
    if (n == 0)
        return;
    printNTimes(n - 1);
    cout << n << " ";
}