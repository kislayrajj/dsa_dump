#include <bits/stdc++.h>
using namespace std;

void print_till_n(int n);

int main()
{
    int n = 23;
    print_till_n(n);
    return 0;
}

void print_till_n(int n)
{
    if (n <= 0)
    {
        return;
    }

    cout << n << " ";
    print_till_n(n - 1);
}