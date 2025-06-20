#include <bits/stdc++.h>
using namespace std;

void explainVector();

int main()
{
    explainVector();
    return 0;
}

void explainVector()
{
    // vector<int> v ;
    // v.push_back(1);
    // v.emplace_back(2);
    // cout<<v[1]<<endl;

    // vector<pair<int, int>> vec;
    // vec.push_back({2,3});
    // vec.emplace_back(4,5);
    // cout<<vec[0].second;

    vector<int> v(5, 200); // size: 5, 200,200 ...
    cout << v[0] << endl;

    vector<int> v3(5); // declared vector of size 5
    vector<int> v1(4, 5);
    vector<int> v2(v1);
    cout << v2[0] << endl;

    vector<int> v4 = {300, 301, 302};
    vector<vector<int>> nested;
    nested.push_back(v4); // Now nested = [ [300, 301, 302] ]
    for (int x : nested[0])
    {
        cout << x << " ";
    }
    cout << endl;

    cout << nested[0][1] << endl;
}