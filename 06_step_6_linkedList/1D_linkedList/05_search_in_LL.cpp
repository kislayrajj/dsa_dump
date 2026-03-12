#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};
Node *convertArrToLL(vector<int> &arr);
int isAnElementPresent(Node *head, int target);

int main()
{
    vector<int> arr = {2, 5, 6, 7};
    Node *head = convertArrToLL(arr);
    int target = 7;
    int result = isAnElementPresent(head, target);
    cout << result << endl;
    return 0;
}

Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int isAnElementPresent(Node *head, int target)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == target)
        {
            return 1;
        }
        temp = temp->next;
    }

    return -1;
}
