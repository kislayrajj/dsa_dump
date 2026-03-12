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
int lengthOfLL(Node *head);

int main()
{
    vector<int> arr = {2, 5, 6, 7};
    Node *head = convertArrToLL(arr);
    int result = lengthOfLL(head);
    cout << "Length of LinkedList: " << result << endl;
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

int lengthOfLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        temp = temp->next;
        count++;
    }

    return count;
}
