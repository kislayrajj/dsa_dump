// // #include <bits/stdc++.h>
// // using namespace std;

// // void printAllDivisors(int n);

// // int main()
// // {
// //     int n = 360;
// //     printAllDivisors(n);
// //     return 0;
// // }

// // void printAllDivisors(int n)
// // {
// //     vector<int> divisors;

// //     for (int i = 1; i <= n; i++)
// //     {
// //         if (n % i == 0)
// //         {
// //             divisors.push_back(i);
// //         }
// //     }

// //     for (auto val : divisors)
// //     {
// //         cout << val << " ";
// //     }
// // }

// // more efficient code (tc = )

// #include <bits/stdc++.h>
// using namespace std;

// void printAllDivisors(int n);

// int main()
// {
//     int n = 14;
//     printAllDivisors(n);
//     return 0;
// }

// void printAllDivisors(int n)
// {
//     int limit = sqrt(n);
//     vector<int> divisors;

//     for (int i = 1; i <= limit; i++)
//     {
//         if (n % i == 0)
//         {
//             divisors.push_back(i);
//             if (n / i != i)
//                 divisors.push_back(n / i);
//         }
//     }

//     sort(divisors.begin(), divisors.end());
//     for (auto val : divisors)
//     {
//         cout << val << " ";
//     }
// }

// get gcd using euclidean method

#include <bits/stdc++.h>
using namespace std;

void getGCD(int a, int b);

int main()
{
    int a = 21;
    int b = 36;

    getGCD(a, b);
    return 0;
}

void getGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << "GCD: " << b;
    }
    else
    {
        cout << "GCD: " << a;
    }
}