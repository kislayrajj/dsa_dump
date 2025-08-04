#include <iostream>
using namespace std;

void isEligibleToVote();

int main()
{
    isEligibleToVote();
    return 0;
}
void isEligibleToVote()
{
    int age;
    int ageShortToVote;
    cin >> age;

    ageShortToVote = 18 - age;
    if (cin.fail())
    {
        cout << "Invalid input. Please enter a number." << endl;
        return;
    }

    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else if (age <= 18)
    {
        cout << "You are not eligible yet." << endl
             << "Wait " << ageShortToVote << " more year(s) to vote.";
    }
    else
    {
        cout << "Invalid Age.";
    }
}
