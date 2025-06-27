#include <iostream>
using namespace std;

void print_increasing_reversed_letter_right_angled_triangle(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_increasing_reversed_letter_right_angled_triangle(size);
    return 0;
}

void print_increasing_reversed_letter_right_angled_triangle(int size)
{
    for (int i = size; i >= 1; i--)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}