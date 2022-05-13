#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node_t;

void print_list(node_t *head)
{
    node_t *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void push(node_t *head, int value)
{
    node_t *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->data = value;
    current->next->next = NULL;
}

void addToStart(node_t **head, int value)
{
    node_t *newNode = (node_t *)malloc(sizeof(node_t));

    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

int removeFromStart(node_t **head)
{
    int retval = -1;
    node_t *next_node = NULL;

    if (*head == NULL)
    {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->data;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_last(node_t *head)
{
    int retval = 0;
    /* if there is only one item in the list, removeit */
    if (head->next == NULL)
    {
        retval = head->data;
        free(head);
        return retval;
    }

    /*get to the second lat node in the list */
    node_t *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }

    /*now current points to the second to last item of the list, so let's remove current-> next*/
    retval = current->next->data;
    free(current->next);
    current->next = NULL;
    return retval;
}

int remove_by_index(node_t **head, int n)
{
    int retval = -1;
    node_t *current = *head;
    node_t *temp = NULL;

    if (n == 0)
    {
        return removeFromStart(head);
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
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}
int main()
{
    node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    head->data = 1;
    head->next = (node_t *)malloc(sizeof(node_t));
    head->next->data = 2;
    head->next->next = (node_t *)malloc(sizeof(node_t));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    print_list(head);
    return 0;
}
