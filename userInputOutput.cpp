#include <iostream>
using namespace std;

void printNumber();

int main()
{
    printNumber();
    return 0;
}

void printNumber()
{

    int userInput;
    cin >> userInput;

    if (userInput >= -1000 && userInput <= 1000)
    {
        cout << "User Input: " <<userInput<< endl;
    }
    else
    {
        cout << "Range outta bound" << endl;
    }
}