#include <bits/stdc++.h>
using namespace std;

void reverseANumber(int num);

int main()
{
    int num = 10400;
    reverseANumber(num);
    return 0;
}

void reverseANumber(int num)
{
    int reverseNumber = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
        num /= 10;
    }
    cout << reverseNumber << endl;
}

// leetcode sol
// class Solution {
// public:
//     int reverse(int x) {
//         int reversed = 0;

//         while (x != 0) {
//             int digit = x % 10;

//             // Check if reversed * 10 + digit would overflow
//             if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
//                 return 0;
//             if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8))
//                 return 0;

//             reversed = reversed * 10 + digit;
//             x /= 10;
//         }

//         return reversed;
//     }
// };
