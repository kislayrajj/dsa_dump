#include <bits/stdc++.h>
using namespace std;

int getFactorial(int n);

int main()
{
    int n = 6;
    int result = getFactorial(n);
    cout << result << endl;
    return 0;
}

int getFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * getFactorial(n - 1);
}