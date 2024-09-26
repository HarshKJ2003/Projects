#include <stdio.h>
#include <stdlib.h>

struct node
{
    float coeff;
    int exp;
    struct node* next;
};

struct node* create(float coeff, int exp)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coeff = coeff;
    newnode->exp = exp;
    newnode->next = NULL;
    return newnode;
}

struct node* append(struct node* node, struct node* head) {
    if (node->exp > head->exp) {
        node->next = head;
        return node;
    } else if (node->exp == head->exp) {
        head->coeff += node->coeff;
        return head;
    } else if (head->next == NULL) {
        head->next = node;
        return head;
    } else if (node->exp < head->next->exp) {
        node->next = head->next;
        head->next = node;
        return head;
    } else {
        struct node* temp = head->next;
        return append(node, temp);
    }
}


void display(struct node* node)
{
    while (node != NULL)
    {
        printf("+%fx^%d", node->coeff, node->exp);
        node = node->next;
    }
}

int main()
{
    int i;
    printf("Enter number of nodes:");
    scanf("%d", &i);
    
    int a;
    float b;
    printf("\nEnter coefficient:");
    scanf("%f", &b);
    printf("\nEnter exponent:");
    scanf("%d", &a);
    struct node* head = create(b, a);

    for (int j = 1; j < i; j++)
    {
        int exp;
        float coeff;
        printf("\nEnter coefficient:");
        scanf("%f", &coeff);
        printf("\nEnter exponent:");
        scanf("%d", &exp);
        struct node* newnode = create(coeff, exp);
        head = append(newnode, head);
    }

    display(head);
    struct node* current = head;
    while (current != NULL)
    {
        struct node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}