#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Create a linked list
struct Node* createList(int n)
{
    struct Node *head = NULL;
    struct Node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        struct Node *newnode = malloc(sizeof(struct Node));

        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    return head;
}

// Merge two sorted linked lists
struct Node* merge(struct Node *head1, struct Node *head2)
{
    struct Node *head;
    struct Node *temp;

    // Find the first node
    if (head1->data <= head2->data)
    {
        head = head1;
        head1 = head1->next;
    }
    else
    {
        head = head2;
        head2 = head2->next;
    }

    temp = head;

    // Merge the lists
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            temp->next = head1;
            head1 = head1->next;
        }
        else
        {
            temp->next = head2;
            head2 = head2->next;
        }

        temp = temp->next;
    }

    // Attach remaining nodes
    if (head1 != NULL)
        temp->next = head1;
    else
        temp->next = head2;

    return head;
}

// Display linked list
void display(struct Node *head)
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n1, n2;

    printf("Enter size of first list: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted list: ");
    struct Node *head1 = createList(n1);

    printf("Enter size of second list: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted list: ");
    struct Node *head2 = createList(n2);

    struct Node *head = merge(head1, head2);

    printf("Merged list: ");
    display(head);

    return 0;
}
