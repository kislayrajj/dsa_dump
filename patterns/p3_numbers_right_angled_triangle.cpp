#include <iostream>
using namespace std;

void print_numbers_right_angled_triangle(int size);

int main()
{
    int size;
    cout << "Enter size (2,3,4...): ";
    cin >> size;
    print_numbers_right_angled_triangle(size);
    return 0;
}

void print_numbers_right_angled_triangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        int number = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}