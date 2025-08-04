#include <iostream>
using namespace std;

void print_alpha_ramp(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_alpha_ramp(size);
    return 0;
}

void print_alpha_ramp(int size)
{
    char ch = 'A';

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}