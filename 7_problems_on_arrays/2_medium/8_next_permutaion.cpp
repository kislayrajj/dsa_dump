#include <bits/stdc++.h>
using namespace std;

// Brute force: Generate all permutations
void getPermutation(vector<int> &arr, int idx, vector<vector<int>> &ans);
vector<int> getNextPermute(vector<int> &curArr);

int main() 
{
    vector<int> curArr = {3, 1, 2};
    vector<int> result = getNextPermute(curArr); 
    
    for (auto it : result) {
        cout << it << " ";
    }  
    cout << endl;

    return 0; 
}

void getPermutation(vector<int> &arr, int idx, vector<vector<int>> &ans)
{
    int n = arr.size();
    if (idx == n)
    {
        ans.push_back(arr);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        swap(arr[idx], arr[i]);
        getPermutation(arr, idx + 1, ans);
        swap(arr[idx], arr[i]);
    }
}

vector<int> getNextPermute(vector<int> &curArr) {
    vector<vector<int>> allPermutations;
    vector<int> arr = curArr;
    getPermutation(arr, 0, allPermutations);

    sort(allPermutations.begin(), allPermutations.end());

    for (int i = 0; i < allPermutations.size(); i++) {
        if (allPermutations[i] == curArr) {
           
            if (i + 1 < allPermutations.size()) {
                return allPermutations[i + 1];
            } else
            {
                return allPermutations[0]; // return first if curr arr is the last valid permutation.
            }
        }
    }
    return {}; 
}