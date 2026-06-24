#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target);

int main()
{
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans = fourSum(arr,target);
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

// vector<vector<int>> fourSum(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     set<vector<int>> st;

//     for (int a = 0; a < n; a++)
//     {
//         for (int b = a + 1; b < n; b++)
//         {
//             int c = b + 1, d = n - 1;

//             while (c < d)
//             {
//                 long long sum = arr[a] + arr[b] + arr[c] + arr[d];
//                 if (sum == target)
//                 {
//                     st.insert({arr[a], arr[b], arr[c], arr[d]});
//                     c++;
//                     d--;
//                 }
//                 else if (sum < target)
//                 {
//                     c++;
//                 }
//                 else
//                 {
//                     d--;
//                 }
//             }
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());

//     return ans;
// }

// optimize space complexity

vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    set<vector<int>> st;

    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            int c = b + 1, d = n - 1;

            while (c < d)
            {
                long long sum = arr[a] + arr[b] + arr[c] + arr[d];
                if (sum == target)
                {
                    st.insert({arr[a], arr[b], arr[c], arr[d]});
                    c++;
                    d--;
                }
                else if (sum < target)
                {
                    c++;
                }
                else
                {
                    d--;
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}