#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &arr);

int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1, 4, 1, 1, 1 };
    int result = maxConsecutiveOnes(a);
    cout << result << endl;
    return 0;
}

int maxConsecutiveOnes(vector<int> &a)
{
    int n = a.size();
    int count = 0;
    int maxConsecutiveOnes = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        else if (a[i] != 1 && count > maxConsecutiveOnes)
        {
            maxConsecutiveOnes = count;
            count = 0;
        }
        else
        {
            count = 0;
        }
    }

    return maxConsecutiveOnes > count ? maxConsecutiveOnes : count;
}