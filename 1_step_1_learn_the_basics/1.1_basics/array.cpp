#include <iostream>
using namespace std;

void fillArray();

int main()
{
    fillArray();
    return 0;
}

void fillArray()
{
    // // 1D array
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // // cout<<arr[3];
    // for (int i = 0; i < 5; ++i)
    // {
    //     cout << arr[i] << " ";
    // }

    // // 2D array

    // // declaration of 2D array: dataType variableName [rowSize][colSize]

    // int arr[3][5];
    // arr[1][3]=34;

    // cout<< arr[1][3];

    // working with string
    string s = "Shiv";
    int len = s.size();
    // cout << len;
    // s[len - 1] = 'a';
    cout << s[len - 1]; // get char at last index
    // cout<<s;
}
