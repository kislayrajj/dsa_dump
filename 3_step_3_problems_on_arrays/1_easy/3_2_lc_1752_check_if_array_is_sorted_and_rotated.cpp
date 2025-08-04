#include <bits/stdc++.h>
using namespace std;

bool checkIfArrayIsSortedAndRotated(vector<int> arr);

int main()
{
    // vector<int> a = {3, 4, 5, 1, 2};
    vector<int> a = {3, 4, 5, 1, 2,4};
    int n = a.size();

    cout << (checkIfArrayIsSortedAndRotated(a) ? "True" : "False");
    return 0;
}

bool checkIfArrayIsSortedAndRotated(vector<int> a)
{
    int count = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[(i + 1) % n])
        {
            count++;
            if (count > 1)
            {
                return false;
            }
        }
    }
    return true;
}