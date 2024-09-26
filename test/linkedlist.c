#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * ptr;
};
void traverse(struct node * x);
void main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->ptr = second;
    second->data = 16;
    second->ptr = third;
    third->data = 6;
    third->ptr = NULL;
    traverse(head);
}
void traverse(struct node * x)
{
    while(x!=NULL){
        printf("%d -->\n",x->data);
        x = x->ptr;
    }
    printf("NULL");
}