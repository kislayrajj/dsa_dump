#include <iostream>
using namespace std;

void print_inverted_right_angled_triangle(int size);

int main()
{
    int size;
    cout << "Enter size (2,3,4 ...): ";
    cin >> size;
    print_inverted_right_angled_triangle(size);
}

void print_inverted_right_angled_triangle(int size)
{
    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "x ";
        }
        cout << endl;
    }
}