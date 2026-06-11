#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr);

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    // vector<int> arr = {0, 0, 0};
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

// vector<vector<int>> threeSum(vector<int> &arr)
// {
//     set<vector<int>> st;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == 0)
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// better approach
// hashing idea;

// vector<vector<int>> threeSum(vector<int> &arr)
// {
//     set<vector<int>> st;
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         set<int> hashset;

//         for (int j = i + 1; j < n; j++)
//         {
//             int k = -(arr[i] + arr[j]);
//             if (hashset.find(k) != hashset.end())
//             {
//                 vector<int> temp = {arr[i], arr[j], k};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// optimal sol

vector<vector<int>> threeSum(vector<int> &arr)
{
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int k = 0; k < arr.size(); k++)
    {
        if (k > 0 && arr[k - 1] == arr[k])
            continue;

        int i = k + 1, j = arr.size() - 1;

        while (i < j)
        {
            if (arr[k] + arr[i] + arr[j] == 0)
            {
                ans.push_back({arr[k], arr[i], arr[j]});
                i++;
                j--;
                while (i < j && arr[i - 1] == arr[i])
                    i++;
                while (i < j && arr[j] == arr[j + 1])
                    j--;
            }
            else if (arr[k] + arr[i] + arr[j] < 0)
            {
                i++;
                while (i < j && arr[i - 1] == arr[i])
                    i++;
            }
            else
            {
                j--;
                while (i < j && arr[j] == arr[j + 1])
                    j--;
            }
        }
    }
    return ans;
}