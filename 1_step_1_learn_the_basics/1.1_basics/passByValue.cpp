#include <iostream>
using namespace std;

// void printTable(int num);

// int main()
// {
//     int number;
//     cout << "Enter a number to get the table: ";
//     cin >> number;
//     printTable(number);
//     cout<< "After printTable function, number = "<<number;
//     return 0;
// }

// void printTable(int num)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << i * num << endl;
//     }
// }



void changeString(string s);

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    changeString(s);
    // check pass by value of reference
    cout << "After changeString function: " << s << endl;
    return 0;
}

void changeString(string s)
{
    s = "String changed";
    cout <<"Print from inside fn: "<< s << endl;
}
