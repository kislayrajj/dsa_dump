#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagram(vector<string> strs);

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagram(strs);

    for (vector<string> group : result)
    {
        for (string str : group)
        {
            cout << str << ", ";
        }
        cout << "\n";
    }

    return 0;
}

// // brute force sol
// vector<vector<string>> groupAnagram(vector<string> strs)
// {
//     unordered_map<string, vector<string>> mp;

//     for (int i = 0; i < strs.size(); i++)
//     {
//         string currStr = strs[i];
//         sort(currStr.begin(), currStr.end());

//         mp[currStr].push_back(strs[i]);
//     }

//     vector<vector<string>> ans;

//     for (auto pair : mp)
//     {
//         ans.push_back(pair.second);
//     }

//     return ans;
// }

vector<vector<string>> groupAnagram(vector<string> strs)
{
    map<vector<int>, vector<string>> mp;

    for (int i = 0; i < strs.size(); i++)
    {
        vector<int> freq(26, 0);
        for (int j = 0; j < strs[i].size(); j++)
        {
            freq[strs[i][j] - 'a']++;
        }

        mp[freq].push_back(strs[i]);
    }

    vector<vector<string>> ans;

    for (auto pair : mp)
    {
        ans.push_back(pair.second);
    }

    return ans;
}