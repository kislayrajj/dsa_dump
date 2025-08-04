
#include <bits/stdc++.h>
using namespace std;

void move_zeros_to_end(vector<int> &arr);

int main()
{
    vector<int> arr = {0,1,3,0,2,0,5,4};
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
