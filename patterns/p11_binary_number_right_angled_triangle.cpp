#include <iostream>
using namespace std;

void print_binary_number_right_angled_triangle(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    print_binary_number_right_angled_triangle(size);
    return 0;
}

void print_binary_number_right_angled_triangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }

            // // or
            // cout<<(i+j)%2;
        }
        cout << endl;
    }
}