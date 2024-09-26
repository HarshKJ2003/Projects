#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *ptr;
};

void traverse(struct node *x);
struct node *insert(struct node *head, int data, int index);

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->ptr = second;

    second->data = 16;
    second->ptr = third;

    third->data = 6;
    third->ptr = NULL;
    int a,b;
    traverse(head);
    printf("Enter data and index of new node.");
    scanf("%d %d",&a,&b);
    head = insert(head,a,b);

    traverse(head);

    return 0;
}

void traverse(struct node *x)
{
    while (x != NULL) {
        printf("%d --> ", x->data);
        x = x->ptr;
    }
    printf("NULL\n");
}

struct node *insert(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i < index - 1 && p != NULL) {
        p = p->ptr;
        i++;
    }

    if (p == NULL) {
        printf("Index out of bounds\n");
        return head;
    }

    ptr->data = data;
    ptr->ptr = p->ptr;
    p->ptr = ptr;

    return head;
}
