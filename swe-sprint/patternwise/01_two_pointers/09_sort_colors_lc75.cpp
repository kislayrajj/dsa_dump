#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &arr);

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColors(arr);

    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];

        if (i != arr.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "}";

    return 0;
}

// void sortColors(vector<int> &arr)
// {
//     int red = 0, white = 0;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//             red++;
//         else if (arr[i] == 1)
//             white++;
//     }

//     for (int i = 0; i < red; i++)
//     {
//         arr[i] = 0;
//     }

//     for (int i = red; i < red + white; i++)
//     {
//         arr[i] = 1;
//     }

//     for (int i = red + white; i < arr.size(); i++)
//     {
//         arr[i] = 2;
//     }
// }

// using "Dutch National Flag" approach
void sortColors(vector<int> &arr)
{
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
            mid++;
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}