#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicateElement(vector<int> &arr);

int main()
{
    vector<int> a = {12, 122, 1, 2, 3, 3, 3, 4, 4};
    vector<int> result = removeDuplicateElement(a);
    for (int it : result)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}

vector<int> removeDuplicateElement(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size();)
        {
            if (arr[i] == arr[j])
            {
                arr.erase(arr.begin() + j);
            }
            else
            {
                j++;
            }
        }
    }
    return arr;
}
