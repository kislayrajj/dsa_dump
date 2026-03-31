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

Node *convertToArr(vector<int> &arr);
Node *removeTail(Node *head);

int main()
{
    vector<int> arr = {2, 3, 1, 5, 4};
    Node *head = convertToArr(arr);
    cout << head->data << endl;

    return 0;
}

Node *convertToArr(vector<int> &arr)
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
Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}