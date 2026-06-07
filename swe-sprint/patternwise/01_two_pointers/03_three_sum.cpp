#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr);

int main()
{
    // vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<int> arr = {0,0,0};
    vector<vector<int>> ans = threeSum(arr);
    for (const auto &row : ans)
    {
        cout << "{ ";
        for (int x : row)
        {
            cout << x << ", ";
        }
        cout << "}" << endl;
    }
    return 0;
}

// bruteForce;

vector<vector<int>> threeSum(vector<int> &arr)
{
    set<vector<int>> st;

    for (int i = 0; i < arr.size() ; i++)
    {
        for (int j = i + 1; j < arr.size() ; j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// // better approach

// vector<vector<int>> threeSum(vector<int> &arr){
//     set<vector<int>> st;

    
// }