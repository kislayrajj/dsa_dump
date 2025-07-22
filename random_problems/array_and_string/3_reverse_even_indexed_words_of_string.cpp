#include <bits/stdc++.h>
using namespace std;

vector<string> revEvenWordsOfString(string &str);

int main()
{
    // string str = "My name is Kislay Raj";
    string str = "One Two Three Four Five Six";
    // string str = "My name is Kislay Raj";
    vector<string> result = revEvenWordsOfString(str);
    for (auto it : result)
    {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}

vector<string> revEvenWordsOfString(string &str)
{
    vector<string> splitStr;
    string word;
    stringstream ss(str);

    while (ss >> word)
    {
        splitStr.push_back(word);
    }
    int n = splitStr.size();

    for (int i = 0; i < n - 2; i++)
    {
        if (i % 2 == 0)
        {

            swap(splitStr[i], splitStr[i + 2]);
        }
    }

    return splitStr;
}