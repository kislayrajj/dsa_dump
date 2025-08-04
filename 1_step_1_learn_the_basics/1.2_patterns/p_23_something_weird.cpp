#include <bits/stdc++.h>
using namespace std;

void printMalicious(int n);

int main()
{
    int n = 4;
    printMalicious(n);
    return 0;
}

void printMalicious(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }

        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }

        // ----

        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {

            if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // --

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }

        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }

        // ----
        cout << " ";

        for (int k = n - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {

            if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}