#include <bits/stdc++.h>
using namespace std;

int fib(int n);
int main()
{
    int n = 19 ;
    int result = fib(n);
    cout << result << endl;
    return 0;
}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}