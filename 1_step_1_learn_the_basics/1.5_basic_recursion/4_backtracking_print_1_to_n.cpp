#include <bits/stdc++.h>
using namespace std;

void print_till_n_using_backtracking(int n, int m);

int main()
{
    int m = 40;
    print_till_n_using_backtracking(m, m);
    return 0;
}

void print_till_n_using_backtracking(int n, int m)
{
    if (n <= 0)
    {
        return;
    }

    print_till_n_using_backtracking(n - 1, m);
    cout << n << " ";
}