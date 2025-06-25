#include <bits/stdc++.h>
using namespace std;

void explain_multi_set();

int main()
{
    explain_multi_set();
    return 0;
}

void explain_multi_set()
{
    // Everything is same as set, only stores duplicate elements too

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    // ms.erase(1); // will erase all instance of 1

    // ms.erase(ms.find(1));

    for (auto val : ms)
    {
        cout << val << ' ';
    }
    cout << endl;

    int cnt = ms.count(1);
    cout << cnt << endl;
    // cout<<ms.size()<<endl;
    auto h = ms.find(10);
    h != ms.end() ? cout << *h : cout << "not found";
}