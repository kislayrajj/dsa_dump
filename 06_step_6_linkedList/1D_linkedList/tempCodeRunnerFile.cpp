for(int i = 1; i<arr.size(); i++){
    Node* temp = new Node(arr[i],nullptr);
    mover->next = temp;
    mover = temp;
}