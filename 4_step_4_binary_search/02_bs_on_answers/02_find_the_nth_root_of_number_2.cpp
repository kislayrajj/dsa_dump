#include <bits/stdc++.h>
using namespace std;

int findNthRoot(int n, int k);
int helperFn(int mid, int n, int k);

int main()
{
    int n = 2;
    int k = 25;

    int result = findNthRoot(n, k);
    cout << result;
    return 0;
}

int findNthRoot(int n, int k)
{
    int low = 1, high = k;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int midK = helperFn(mid, n, k);

        if (midK == 1)
            return mid;
        else if (midK == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

//  handling any edge cases i.e. overflow
int helperFn(int mid, int n, int k)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= mid;
        if (ans > k)
            return 2;
    }
    if (ans == k)
        return 1;
    return 0;
}