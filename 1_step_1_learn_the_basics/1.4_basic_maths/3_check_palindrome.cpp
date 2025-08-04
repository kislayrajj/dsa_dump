#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int x);

int main()
{
    int x = 121;
    checkPalindrome(x) ? cout << x << " is a palindrome." << endl : cout << x << " is not a palindrome." << endl;

    return 0;
}

bool checkPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int reversedHalf = 0;

    while (x > reversedHalf)
    {
        reversedHalf = (reversedHalf * 10) + (x % 10);
        x /= 10;
    }

    return x == reversedHalf || x == reversedHalf / 10;
}
