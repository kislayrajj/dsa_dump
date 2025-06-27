#include <iostream>
using namespace std;

void print_number_crown(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_number_crown(size);
    return 0;
}

void print_number_crown(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * (size - i); k++)
        {

            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout<< endl;
    }
}