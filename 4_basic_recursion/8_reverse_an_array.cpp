// #include <bits/stdc++.h>
// using namespace std;

// void revArr(int arr[], int a, int b);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     revArr(arr, 0, n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void revArr(int arr[], int a, int b)
// {
//     if (a >= b)
//         return;

//     swap(arr[a], arr[b]);
//     revArr(arr, a + 1, b - 1);
// }

// 2nd way

#include <bits/stdc++.h>
using namespace std;

void revArr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    revArr(arr, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
}