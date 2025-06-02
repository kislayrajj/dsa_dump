#include <iostream>
using namespace std;

void print_pyramid(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    print_pyramid(size);
    return 0;
}

void print_pyramid(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "x";
        }
        cout << endl;
    }
}