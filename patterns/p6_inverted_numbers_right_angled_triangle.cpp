#include <iostream>
using namespace std;

void print_inverted_numbers_right_angled_triangle(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_inverted_numbers_right_angled_triangle(size);
    return 0;
}

void print_inverted_numbers_right_angled_triangle(int size)
{
    for (int i = size; i >= 1; i--)
    {
        int number = 1;
        for (int j = i; j >= 1; j--)
        {
            cout << number<<" ";
            number++;
        }
        cout << endl;
    }
}
