#include <iostream>
using namespace std;

void print_inverted_pyramid(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_inverted_pyramid(size);
    return 0;
}

void print_inverted_pyramid(int size)
{
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "x";
        }
        cout<<endl;
    }
}