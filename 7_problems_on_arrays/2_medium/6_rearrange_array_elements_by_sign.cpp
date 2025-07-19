#include <bits/stdc++.h>
using namespace std;
// brute force solution
void rearrangeArr(vector<int> &arr);

int main()
{
    // vector<int> arr = {3, 1, -2, -5, 2, -4};
    vector<int> arr = {-1,1};
    cout << "Org array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    rearrangeArr(arr);
    cout << "\nRearranged array (Brute Force): ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}

void rearrangeArr(vector<int> &arr)
{
    int n = arr.size();
    vector<int> positiveTempArr;
    vector<int> negativeTempArr;
    vector<int> tempArr;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveTempArr.push_back(arr[i]);
        }
        else
        {
            negativeTempArr.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        tempArr.push_back(positiveTempArr[i]);
        tempArr.push_back(negativeTempArr[i]);
    }

    arr = tempArr;
}