#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node_t
{
    int data;
    struct Node_t *next;
} Node;

Node *createNode(int d)
{
    Node *ret = (Node *)malloc(sizeof(Node));
    ret->data = d;
    return ret; //free later
}

void pushNode(Node **head, int data)
{
    if (*head != NULL)
    {
        Node *tmp = createNode(data);
        tmp->next = (*head);
        (*head) = tmp;
    }
}

void insertNodeAfter(Node **prev, int data)
{
    Node *tmp = createNode(data);
    if ((*prev)->next != NULL)
        tmp->next = (*prev)->next;
    (*prev)->next = tmp;
}

void deleteNode(Node *node)
{
    if (node->next != NULL)
    {
        node->data = node->next->data;
        node->next = node->next->next;
        free(node->next);
    }
}

Node *removeNthFromEnd(Node *head, int n)
{
}

void printLinkedList(Node *head)
{
    printf("[%d,*]->", (head->data));
    do
    {
        head = head->next;
        printf("[%d,*]->", (head->data));
    } while (head->next != NULL);
}
