#include <bits/stdc++.h>
using namespace std;

void getHCF(int x, int y);

int main()
{
    int x = 36;
    int y = 12;
    getHCF(x, y);
    return 0;
}

void getHCF(int x, int y)
{
    int limit = x > y ? y : x;
    int hcf = 1;

    for (int i = 2; i <= limit; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }

    cout << hcf << endl;
}
