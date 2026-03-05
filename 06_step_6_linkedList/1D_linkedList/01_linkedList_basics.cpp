#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n = 2;
//     int *y = &n;
//     cout << y;
//     return 0;
// }

class Node
{
public: 
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next= next ;
    }
};

int main()
{
    vector<int> arr = {12, 4, 5, 3, 2};
    Node *y = new Node(arr[4], nullptr);
    cout << y->data;
}