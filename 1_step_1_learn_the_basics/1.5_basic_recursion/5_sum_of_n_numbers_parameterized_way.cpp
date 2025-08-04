// parameterized way
#include <bits/stdc++.h>
using namespace std;

void printSumOfNNumber(int n, int m);

int main()
{
    int n = 50;
    printSumOfNNumber(n, 0);
    return 0;
}

void printSumOfNNumber(int n, int sum)
{
    if (n < 1)
    {
        cout << (sum) << endl;
        return;
    }

    printSumOfNNumber(n - 1, sum + n);
}
