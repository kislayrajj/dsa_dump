#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n);

int main()
{
    int n = 1;
    bool result = checkPrime(n);
    cout << n << (result ? " is a Prime Number." : " is NOT a Prime Number.") << endl;

    return 0;
}

bool checkPrime(int n)
{
    if(n<=1) return false;
    int limit = sqrt(n);

    for (int i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return  true;
}