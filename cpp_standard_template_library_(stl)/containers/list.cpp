#include <bits/stdc++.h>
using namespace std;

void explainList();

int main()
{
    explainList();
    return 0;
}

void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(1);
    ls.emplace_front(0);

    for (auto val : ls)
    {
        cout << val << " ";
    }
}