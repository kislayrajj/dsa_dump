#include <bits/stdc++.h>
using namespace std;

void explainQueue();

int main()
{
    explainQueue();
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    cout << q.back() << endl;
    cout << q.front() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}