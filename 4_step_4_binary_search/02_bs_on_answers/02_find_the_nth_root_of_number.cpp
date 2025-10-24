#include <bits/stdc++.h>
using namespace std;

int findNthRoot(int n, int k);
int helperFn(int mid, int n);

int main()
{
    int n = 2;
    int k = 36;

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
        int midK = helperFn(mid, n);

        if (midK <= k)
        {
            if (midK == k)
                return mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

// without handling any edge cases i.e. overflow
int helperFn(int mid, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= mid;
    }

    return ans;
}