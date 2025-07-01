// Functional way

#include <bits/stdc++.h>
using namespace std;

int sumOfNNumbers(int n);

int main()
{
    int n = 50;
    int result = sumOfNNumbers(n);
    cout << result << endl;
    return 0;
}

int sumOfNNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumOfNNumbers(n - 1);
}