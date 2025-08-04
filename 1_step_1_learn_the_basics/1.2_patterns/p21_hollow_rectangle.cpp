#include <iostream>
using namespace std;

void print_hollow_rectangle(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_hollow_rectangle(size);
    return 0;
}

void print_hollow_rectangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        if (i == 1 || i == size)
        {
            for (int j = 1; j <= size; j++)
            {
                cout << 'x';
            }
            cout << endl;
        }
        else
        {
            cout << 'x';
            int spaces = size - 2;
            for (int j = 1; j <= spaces; j++)
            {
                cout << ' ';
            }
            cout << 'x';
            cout << endl;
        }
    }
}