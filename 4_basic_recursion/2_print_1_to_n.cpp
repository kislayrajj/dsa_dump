#include <bits/stdc++.h>
using namespace std;

void print_1_to_n(int n, int m);

int main()
{
    int n = 1;
    int m = 12;
    print_1_to_n(n, m);
    return 0;
}

void print_1_to_n(int n, int m)
{
    if (n > m)
    {
        return;
    }
    cout << n << " ";
    print_1_to_n(n + 1, m);
}
