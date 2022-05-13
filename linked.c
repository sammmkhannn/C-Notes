#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node_t;

void push(node_t *head, int value)
{
    node_t *current = head;
    node_t *newnode = (node_t *)malloc(sizeof(node_t));

    while (current->next)
    {
        current = current->next;
    }
    current->next = newnode;
    current->next->data = value;
    current->next->next = NULL;
}
void traverse(node_t *head)
{
    node_t *current = head;
    while (current->next)
    {
        printf("%d", current->data);
        current = current->next;
    }
}

int pop(node_t *head)
{
    int retval = 0;
    if (head->next == NULL)
    {
        retval = head->data;
        free(head);
        return retval;
    }

    node_t *current = head;
    while (current->next)
    {
        current = current->next;
    }

    int value = current->next->data;
    free(current->next);
    current->next = NULL;
    return value;
}

int shift(node_t **head)
{
    int retval = -1;

    node_t *temp = NULL;
    if (*head == NULL)
    {
        return -1;
    }
    temp = (*head)->next;
    int value = (*head)->data;
    free(*head);
    *head = temp;
}

void unshift(node_t **head, int value)
{
    node_t *newnode = (node_t *)malloc(sizeof(node_t));
    newnode->next = head;
    newnode->data = value;
    *head = newnode;
}

int removeByIndex(node_t **head, int n)
{
    int retval = -1;
    node_t *current = *head;
    node_t *temp = NULL;

    if (n == 0)
    {
        return shift(head);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }
    if (current->next == NULL)
    {
        return -1;
    }

    retval = current->data;
    node_t *temp_node = current->next;
    current->next = temp->next;
    free(temp);

    return retval;
}
int main()
{
    node_t *head = (node_t *)malloc(sizeof(node_t));
    head->data = 20;
    // head->next = (node_t *)malloc(sizeof(node_t));
    // head->next
    push(head, 30);
    push(head, 40);
    push(head, 40);
    traverse(head);
    printf("%d", pop(head));
    unshift(head, 20);
    return 0;
}