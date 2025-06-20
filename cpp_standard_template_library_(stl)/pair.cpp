#include <bits/stdc++.h>
using namespace std;

void explainPair();

int main()
{
    explainPair();
    return 0;
}

void explainPair()
{
    // 1
    // pair<int, int> p = {1,3};
    // cout<< p.first <<" "<< p.second;

    // 2
    //  pair inside pair
    // pair<int, pair<int, int>> p = {3, {2,4}};
    // cout<<p.second.second;

    // 3
    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 5}, {4, 9}};
    cout << arr[1].second;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<< arr[i].first << " "<< arr[i].second<<endl;
    }
}
