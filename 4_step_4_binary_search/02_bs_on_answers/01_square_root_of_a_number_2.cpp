#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n);

int main()
{
    int n = 111;
    int result = findSqrt(n);
    cout << result;

    return 0;
}

int findSqrt(int n)
{
    if (n == 1)
        return 1;
    int low = 1, high = n, sqrt = 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if ((mid * mid) <= n)
        {
            sqrt = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return sqrt;
}