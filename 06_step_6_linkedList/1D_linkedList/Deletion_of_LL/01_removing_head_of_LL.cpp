#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        this->data = data1;
        this->next = next1;
    }
};

Node *convertArrToLL(vector<int> &arr);
Node *deleteHead(Node *head);

int main()
{
    vector<int> arr = {243, 335, 32, 1};
    Node *head = convertArrToLL(arr);
    cout << "Prev Head: " << head->data << endl;
    Node *result = deleteHead(head);
    cout << "Curr Head (post deletion): " << result->data << endl;
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

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = temp->next;
    free(temp);
    
    

    return head;
}