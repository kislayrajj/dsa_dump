#include <bits/stdc++.h>
using namespace std;

void checkArmstrongNumber(int n);

int main()
{
    int n = 371;
    checkArmstrongNumber(n);
    return 0;
}

void checkArmstrongNumber(int n)
{
    int orgNum = n;
    int sum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n /= 10;
    }

    // orgNum == sum ? cout << "true" << endl : cout << "false" << endl;
    cout << orgNum << " " << (orgNum == sum ? "is an Armstrong Number." : "is NOT an Armstrong Number.") << endl;
}