#include <bits/stdc++.h>
using namespace std;

void explain_max_element();

int main()
{
    explain_max_element();
    return 0;
}

void explain_max_element()
{
    // int a[]={1,24,3,43,32,32,2};
    pair<int, int> a[] = {{1, 2}, {3, 3}, {4, 2}};
    int n = sizeof(a) / sizeof(a[0]);
    // int maxi  = *max_element(a, a+n);
    auto maxi = *max_element(a, a + n);
    // cout<< maxi<< endl;
    cout << "(" << maxi.first << ", " << maxi.second << ")" << endl;
}