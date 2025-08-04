#include <iostream>
using namespace std;

void changeString(string &s);

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

void changeString(string &s)
{
    s = "String changed";
    cout << "Print from inside fn: " << s << endl;
}
