#include <stdio.h>
#include <stdlib.h>

struct node {
    float coeff;
    int exp;
    struct node* next;
};

struct node* create(float coeff, int exp) {
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
        free(node);  
        return head;
    } else if (head->next == NULL) {
        head->next = node;
        return head;
    } else if (node->exp > head->next->exp) {  
        node->next = head->next;
        head->next = node;
        return head;
    } else {
        struct node* temp = head->next;
        return append(node, temp);
    }
}



struct node* Pmult(struct node* h1, struct node* h2) {
    struct node* temp = create(0, 0);
    struct node* h2_original = h2;
    while (h1 != NULL) {
        while (h2 != NULL) {
            struct node* newNode = create(h1->coeff * h2->coeff, h1->exp + h2->exp);
            temp = append(newNode, temp);
            h2 = h2->next;
        }
        h1 = h1->next;
        h2 = h2_original;
    }
    return temp;
}

void display(struct node* node) {
    while (node != NULL) {
        printf("+%fx^%d", node->coeff, node->exp);
        node = node->next;
    }
}

int main() {
    int i;
    printf("Enter number of nodes:");
    scanf("%d", &i);
    int a;
    float b;
    printf("\nEnter coefficient:");
    scanf("%f", &b);
    printf("\nEnter exponent:");
    scanf("%d", &a);
    struct node* h1 = create(b, a);
    for (int j = 1; j < i; j++) {
        int exp;
        float coeff;
        printf("\nEnter coefficient:");
        scanf("%f", &coeff);
        printf("\nEnter exponent:");
        scanf("%d", &exp);
        struct node* newnode = create(coeff, exp);
        h1 = append(newnode, h1);
    }
    printf("\nNow for the second polynomial.\n");
    int p;
    printf("Enter number of nodes:");
    scanf("%d", &p);
    int q;
    float r;
    printf("\nEnter coefficient:");
    scanf("%f", &r);
    printf("\nEnter exponent:");
    scanf("%d", &q);
    struct node* h2 = create(r, q);
    for (int x = 1; x < p; x++) {
        int exp;
        float coeff;
        printf("\nEnter coefficient:");
        scanf("%f", &coeff);
        printf("\nEnter exponent:");
        scanf("%d", &exp);
        struct node* newnode = create(coeff, exp);
        h2 = append(newnode, h2);
    }
    struct node* h3 = Pmult(h1, h2);
    display(h3);
    return 0;
}