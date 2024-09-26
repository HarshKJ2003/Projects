#include <stdio.h>
#include <stdlib.h>

struct node
{
    float coeff;
    int exp;
    struct node* next;
};

struct node* Pread(float coeff, int exp)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coeff = coeff;
    newnode->exp = exp;
    newnode->next = NULL; 
    return newnode;
}

struct node* Padd(struct node* node, struct node* head) {
    if (node->exp > head->exp) {
        node->next = head;
        return node;
    } else if (node->exp == head->exp) {
        head->coeff += node->coeff;
        return head;
    } else {
        struct node* current = head;
        while (current->next != NULL && current->next->exp >= node->exp) {
            current = current->next;
        }
        node->next = current->next;
        current->next = node;
        return head;
    }
}
struct node* add(struct node* h1, struct node* h2)
{
    while (h2 != NULL) 
    {
        h1 = Padd(h2, h1);
        h2 = h2->next;
    }
    return h1;  
}
void Pwrite(struct node* head)
{
    struct node* node = head;
    while (node != NULL)
    {
        printf("+%fx^%d", node->coeff, node->exp);
        node = node->next;
    }
}

int main()
{
    int numNodes;
    printf("Enter number of nodes:");
    scanf("%d", &numNodes);

    float coeff, coeff2;
    int exp, exp2;
    printf("\nEnter coefficient:");
    scanf("%f", &coeff);
    printf("Enter exponent:");
    scanf("%d", &exp);
    struct node* head = Pread(coeff, exp);

    for (int j = 1; j < numNodes; j++)
    {
        printf("\nEnter coefficient:");
        scanf("%f", &coeff);
        printf("Enter exponent:");
        scanf("%d", &exp);
        struct node* newnode = Pread(coeff, exp);
        head = Padd(newnode, head);
    }

    printf("\nFor 2nd polynomial:");
    int numNodes2;  
    printf("\nEnter number of nodes:");
    scanf("%d", &numNodes2);
    printf("\nEnter coefficient:");
    scanf("%f", &coeff2);
    printf("Enter exponent:");
    scanf("%d", &exp2);
    struct node* head2 = Pread(coeff2, exp2);

    for (int k = 1; k < numNodes2; k++) 
    {
        printf("\nEnter coefficient:");
        scanf("%f", &coeff2);
        printf("Enter exponent:");
        scanf("%d", &exp2);
        struct node* newnode = Pread(coeff2, exp2);
        head2 = Padd(newnode, head2);
    }

    struct node* head3 = add(head, head2); 
    Pwrite(head3);
    return 0;
}


