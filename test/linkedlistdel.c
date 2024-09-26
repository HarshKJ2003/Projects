#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* ptr;
};
void traverse(struct node * x);
struct node* del(struct node* head, int index);

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head->data = 12;
    head->ptr = second;
    second->data = 16;
    second->ptr = third;
    third->data = 6;
    third->ptr = NULL;
    int a;
    traverse(head);
    printf("\nEnter index to delete: "); 
    scanf("%d", &a);
    head = del(head, a);
    traverse(head);
    return 0;
}
void traverse(struct node * x)
{
    while(x!=NULL){
        printf("%d -->\n",x->data);
        x = x->ptr;
    }
    printf("NULL");
}
struct node* del(struct node* head, int index)
{
    struct node* p = head;
    struct node* q = head->ptr;
    for (int i = 0; i < index - 1; i++) 
    {
        p = p->ptr;
        q = q->ptr;
    }

    p->ptr = q->ptr; 
    free(q);
    return head;
}
