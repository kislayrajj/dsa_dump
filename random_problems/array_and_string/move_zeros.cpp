// #include <bits/stdc++.h>
// using namespace std;

// void move_zeros_to_end(vector<int> arr);

// int main()
// {
//     vector<int> arr = {0, 4, 3, 309, 40, 0, 0, 23, 23, 45, 5, 34};
//     move_zeros_to_end(arr);
//     return 0;
// }

// void move_zeros_to_end(vector<int> arr)
// {
//     vector<int> sortedArr;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] != 0)
//         {
//             sortedArr.push_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//         {
//             sortedArr.push_back(arr[i]);
//         }
//     }

//     // Output the result
//     cout << "Moved zeros to the end:\n";
//     for (int val : sortedArr)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// efficient one

#include <bits/stdc++.h>
using namespace std;

void move_zeros_to_end(vector<int> &arr);

int main()
{
    vector<int> arr = {0, 4, 3, 309, 40, 0, 0, 23, 23, 45, 5, 34};
    move_zeros_to_end(arr);
    cout << "Moved zeros to the end: ";
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}

void move_zeros_to_end(vector<int> &arr)
{
    int idx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[idx]);
            // // or a custom swap logic
            // int temp = arr[i];
            // arr[i] = arr[idx];
            // arr[idx] = temp;
            idx++;
        }
    }
}
