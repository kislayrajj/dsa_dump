#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &arr);

int main()
{
    vector<int> arr = {-4, -3, 0, 2, 5, 10};
    vector<int> result = sortedSquares(arr);

    cout << "{";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << "}";

    return 0;
}

// vector<int> sortedSquares(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> sortedSquaresArr = {};

//     for (int i = 0; i < n; i++)
//     {
//         sortedSquaresArr.push_back(arr[i] * arr[i]);
//     }

//     sort(sortedSquaresArr.begin(), sortedSquaresArr.end());

//     return sortedSquaresArr;
// }

// optimal solution with tc O(n) requiring only one pass get the result.

vector<int> sortedSquares(vector<int> &arr)
{
    int n = arr.size();
    int c = n - 1;
    int i = 0;
    int j = n - 1;
    vector<int> sortedSquaredArr(n);

    while (i <= j)
    {
        if (abs(arr[i]) < abs(arr[j]))
        {
            sortedSquaredArr[c] = arr[j] * arr[j];
            c--;
            j--;
        }
        else
        {
            sortedSquaredArr[c] = arr[i] * arr[i];
            c--;
            i++;
        }
    }

    return sortedSquaredArr;
}
