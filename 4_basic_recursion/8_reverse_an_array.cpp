// #include <bits/stdc++.h>
// using namespace std;

// void revArr(int a[], int l, int r);

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(a) / sizeof(a[0]);
//     cout << "Original Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     revArr(a, 0, n - 1);
//     cout << "\nReversed Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

// return 0
// }

// void revArr(int a[], int l, int r)
// {
//     if (l > r)
//         return;

//     swap(a[l], a[r]);
//     revArr(a, l + 1, r - 1);
// }

// using one variable

#include <bits/stdc++.h>
using namespace std;

// void revArr(int arr[], int n);

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = (sizeof(a) / sizeof(a[0]));

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     revArr(a, n - 1);

//     cout << "\nReversed array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// void revArr(int a[], int n)
// {
//     if (n <= 1)
//     {
//         return;
//     };
//     swap(a[0], a[n]);
//     revArr(a + 1, n - 1);
// }

