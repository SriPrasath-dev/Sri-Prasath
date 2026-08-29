#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void pairwiseSwap(struct Node *head) {

    struct Node *temp = head;

    while (temp != NULL && temp->next != NULL) {

        int x = temp->data;
        temp->data = temp->next->data;
        temp->next->data = x;

        temp = temp->next->next;
    }
}

void display(struct Node *head) {

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {

    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode;

    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        newNode = malloc(sizeof(struct Node));

        printf("Enter value: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Before: ");
    display(head);

    pairwiseSwap(head);

    printf("\nAfter: ");
    display(head);

    return 0;
}
