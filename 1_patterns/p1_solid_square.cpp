#include <iostream>
using namespace std;

// void print_solid_square();

// int main()
// {
//     print_solid_square();

//     return 0;
// }

// void print_solid_square()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << "x ";
//         }

//         cout << endl;
//     }
// }

// taking size n from user

void print_solid_square(int size);

int main()
{
    int size;
    cout << "Enter the size (2,3,4,5...): ";
    cin >> size;
    print_solid_square(size);
    return 0;
}

void print_solid_square(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "x ";
        }
        cout << endl;
    }
}