#include <iostream>
using namespace std;

void print_alpha_triangle(int size);

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    print_alpha_triangle(size);
    return 0;
}

// void print_alpha_triangle()
// {
//     char ch = 'E';

//     for (int i = 1; i <= 5; i++)
//     {
//         char printableCh = ch;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << printableCh;
//             printableCh++;
//         }
//         ch--;
//         cout << endl;
//     }
// }


void print_alpha_triangle(int size)
{

    char ch = 'A' + (size-1);

    for (int i = 1; i <= size; i++)
    {
        char printableCh = ch;
        for (int j = 1; j <= i; j++)
        {
            cout << printableCh<< " ";
            printableCh++;
        }
        ch--;
        cout << endl;
    }
}