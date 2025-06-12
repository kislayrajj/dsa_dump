#include <iostream>
using namespace std;

void print_alpha_hill(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_alpha_hill(size);
    return 0;
}

void print_alpha_hill(int size)
{
    for (int i = 1; i <= size; i++)
    {
        char ch = 'A';
        for (int j = size - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << ch << "";
            ch++;
        }

        ch--;
        for (int l = 1; l <= i - 1; l++)
        {
            ch--;
            cout << ch << "";
        }
        cout << endl;
    }
}