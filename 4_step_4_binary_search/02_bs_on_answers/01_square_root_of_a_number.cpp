#include <bits/stdc++.h>
using namespace std;

// brute force solution
int findSquareRoot(int &n);

int main()
{
    int n = 36;
    int result = findSquareRoot(n);
    cout << result;

    return 0;
}

int findSquareRoot(int &n)
{

    if (n == 1)
        return 1;

    int sqrt = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i * i <= n)
        {
            sqrt = i;
        }
        else
        {
            return sqrt;
        }
    }

    return -1;
}