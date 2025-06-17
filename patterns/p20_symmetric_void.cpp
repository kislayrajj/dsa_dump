#include <iostream>
using namespace std;

void print_symmetric_void(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_symmetric_void(size);
    return 0;
}

void print_symmetric_void(int size)
{
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "x";
        }
        int spaces = 2 * (size - i);
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << 'x';
        }
        cout << endl;
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "x";
        }
        int spaces = 2 * (size - i);
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << 'x';
        }
        cout << endl;
    }
}