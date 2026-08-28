#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node* rotateRight(struct Node* head, int k)
{
    int n = 1;

    if (head == NULL || head->next == NULL || k == 0)
        return head;

    struct Node* temp = head;

    // Find length and last node
    while (temp->next != NULL)
    {
        temp = temp->next;
        n++;
    }

    k = k % n;

    if (k == 0)
        return head;

    // Make the list circular
    temp->next = head;

    int st = n - k;

    temp = head;

    // Move to the new last node
    for (int i = 0; i < st - 1; i++)
    {
        temp = temp->next;
    }

    // New head
    head = temp->next;

    // Break the circle
    temp->next = NULL;

    return head;
}


// Create a new node
struct Node* createNode(int value)
{
    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}


// Print linked list
void printList(struct Node* head)
{
    struct Node* temp = head;

    while (temp != NULL)
    {
        printf("%d", temp->val);

        if (temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf("\n");
}


int main()
{
    struct Node* head = NULL;
    struct Node* temp = NULL;

    int n, value, k;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);

        struct Node* newNode = createNode(value);

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("\nOriginal list: ");
    printList(head);

    head = rotateRight(head, k);

    printf("After rotating right by %d: ", k);
    printList(head);

    return 0;
}
