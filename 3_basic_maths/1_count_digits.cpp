#include <bits/stdc++.h>
using namespace std;

void countDigit(int num);

int main()
{
    int num = 3223000;
    countDigit(num);
    return 0;
}

void countDigit(int num)
{
    int numOfDigits = 0;
    while (num > 0)
    {
        numOfDigits++;
        num = num / 10;
    }

    cout << "Number of digits:" << numOfDigits << endl;
}