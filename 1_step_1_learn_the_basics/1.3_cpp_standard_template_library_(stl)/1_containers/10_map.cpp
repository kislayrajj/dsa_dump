#include <bits/stdc++.h>
using namespace std;

void explain_map();

int main()
{
    explain_map();
    return 0;
}

void explain_map()
{
    map<int, int> mp;
    map<int, pair<int, int>> mp2;
    map<pair<int, int>, int> mp3;

    mp[999] = 2;
    mp[2] = 4;
    mp[4] = 2;
    mp[5] = 5;
    mp[3] = 7;
    mp[6] = 9;
    mp.insert({7, 23});
    mp.insert({7, 233}); // will only insert if key does not already exist
    mp.emplace(8, 34);
    mp.emplace(7, 34);
    for (auto val : mp)
    {
        cout << val.first << ": " << val.second << endl;
    }

    // map with value as pair
    mp2[1] = {10, 20};
    mp2[2] = {30, 40};
    mp2.insert({3, {50, 60}});
    mp2.emplace(4, make_pair(70, 80));

    cout << "\n--- map<int, pair<int,int>> ---\n";
    for (auto val : mp2)
    {
        cout << val.first << ": {" << val.second.first << ", " << val.second.second << "}" << endl;
    }

    // map with pair as key
    mp3[{1, 2}] = 100;
    mp3[{2, 3890}] = 200;
    mp3[{3, 3}] = 290;
    mp3.insert({{3, 4}, 300});
    mp3.insert({{3, 4}, 3900});
    mp3.emplace(make_pair(4, 5), 400);
    mp3.emplace(make_pair(4, 5), 49900);
    mp3.emplace(make_pair(3, 4), 49900);

    cout << "\n--- map<pair<int,int>, int> ---\n";
    for (auto val : mp3)
    {
        cout << "{" << val.first.first << ", " << val.first.second << "}: " << val.second << endl;
    }

    cout << mp[1000]; // if doesnot exist, prints 0
    // fun
    // map<int, int> mp4;
    // int start = 100;
    // for (int i = 0; i < 100; i++)
    // {
    //     mp4[i] = start;
    //     start--;
    // }
    // for (auto val : mp4)
    // {
    //     cout << val.first << ": " << val.second << endl;
    // }

    // auto it = mp.find(8);
    auto it = mp.find(800);
    // cout<< it->first<< endl; 
    cout<< (*it).second<< endl; 
    cout<<INT_MIN<<endl;
}