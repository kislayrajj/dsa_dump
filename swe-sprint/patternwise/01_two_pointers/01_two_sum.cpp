#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target);

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(arr, target);
    cout<<"{";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if(i!=ans.size()-1){
            cout << ", ";
        }
    }
    cout<<"}";
    return 0;
}

vector<int> twoSum(vector<int> &arr, int target)
{
    int i = 0, j = arr.size() - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            return {i + 1, j + 1};
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1};
}