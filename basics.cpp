#include <iostream>
using namespace std;

void printInput()
{
    int x;
    cin >> x;
    cout << "Value of x: " << x;
}

void printString()
{
    string str;
    getline(cin, str);
    // char str;
    // cin>>str;
    cout << str;
}
int main()
{
    // cout << "Hello C++" << endl;
    // return 0;
    // printInput();
    printString();
    return 0;
} 