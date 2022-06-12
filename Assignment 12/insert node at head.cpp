SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{
    SinglyLinkedListNode*newnode = new SinglyLinkedListNode(data);
        newnode->next=llist;
        return newnode;


}
