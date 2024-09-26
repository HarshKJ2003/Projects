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

void Perase(int exp, struct node** head_ref) {
    struct node* current = *head_ref;
    struct node* prev = NULL;

    while (current != NULL && current->exp != exp) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Term with exponent %d not found.\n", exp);
        return;
    }

    if (prev == NULL) {
        *head_ref = current->next;
    } else {
        prev->next = current->next;
    }
}

void Pwrite(struct node* head)
{
    struct node* node = head;
    while (node != NULL)
    {
        printf("+%fx^%d", node->coeff, node->exp);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    int numNodes;
    printf("Enter number of nodes:");
    scanf("%d", &numNodes);

    float coeff;
    int exp;
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

    printf("\nPolynomial before erasing:\n");
    Pwrite(head);

    int exp_to_erase;
    printf("Enter the exponent of the term to erase:");
    scanf("%d", &exp_to_erase);
    Perase(exp_to_erase, &head);

    printf("\nPolynomial after erasing:\n");
    Pwrite(head);

    return 0;
}
