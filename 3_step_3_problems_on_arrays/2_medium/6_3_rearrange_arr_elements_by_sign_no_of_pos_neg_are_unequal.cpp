#include <bits/stdc++.h>
using namespace std;

void rearrangeArr(vector<int> &arr);

int main()
{
    vector<int> arr = {1, 2, -4, -5, 3, 7};
    cout << "Org array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    rearrangeArr(arr);
    cout << "\nRearranged array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}

void rearrangeArr(vector<int> &arr)
{
    int n = arr.size();
    vector<int> positives, negatives, temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positives.push_back(arr[i]);
        }
        else
        {
            negatives.push_back(arr[i]);
        }
    }

    if (positives.size() > negatives.size())
    {
        for (int i = 0; i <negatives.size(); i++)
        {
            temp.push_back(positives[i]);
            temp.push_back(negatives[i]);
        }

        for (int i = negatives.size(); i < positives.size(); i++)
        {
            temp.push_back(positives[i]);
        }
    }
    else
    {
        for (int i = 0; i < positives.size(); i++)
        {
            temp.push_back(positives[i]);
            temp.push_back(negatives[i]);
        }

        for (int i = positives.size(); i < negatives.size(); i++)
        {
            temp.push_back(negatives[i]);
        }
    }

    arr = temp;
}