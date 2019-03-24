#include "linkedList.h"

int main()
{
    Node* head = createNode(5);
    Node* second = createNode(52);
    Node* third = createNode(1);

    head->next = second;
    second->next = third;
    third->next = NULL;

    pushNode(&head, 6);
    deleteNode(second);
    insertNodeAfter(&second, 42);

    printLinkedList(head);
    return 0;
}