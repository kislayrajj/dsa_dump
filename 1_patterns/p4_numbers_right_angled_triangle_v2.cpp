#include <iostream>
using namespace std;

void print_numbers_right_angled_triangle(int size);

int main()
{
    int size;
    cout << "Enter size (2,3,5 ...): ";
    cin >> size;
    print_numbers_right_angled_triangle(size);
    return 0;
}

void print_numbers_right_angled_triangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
