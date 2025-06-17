#include <iostream>
using namespace std;

void print_the_numbers(int size);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    print_the_numbers(size);
    return 0;
}
 
void print_the_numbers(int size)
{
    for (int i = 0; i < 2 * size - 1; i++)
    {
        for (int j = 0; j < 2 * size - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * size - 2) - j;
            int bottom = (2 * size - 2) - i;
            cout << size - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}