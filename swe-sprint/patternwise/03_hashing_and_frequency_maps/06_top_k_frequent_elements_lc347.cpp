#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &arr, int k);

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(arr, k);

    for (int e : result)
    {
        cout << e << ", ";
    }

    return 0;
}

vector<int> topKFrequent(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> freqMap;
    vector<vector<int>> bucket(n + 1);
    vector<int> ans;

    for (int e : arr)
    {
        freqMap[e]++;
    }

    for (auto [arrElement, freq] : freqMap)
    {
        bucket[freq].push_back(arrElement);
    }

    for (int i = n; i >= 1 && ans.size() < k; i--)
    {
        for (int arrElement : bucket[i])
        {
            ans.push_back(arrElement);

            if (ans.size() == k)
                break;
        }
    }

    return ans;
}
