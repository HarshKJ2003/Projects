#include <stdio.h>
#include <stdlib.h>
struct node{
    char name;
    int marks;
    int attendance;
    struct node * ptr;
};
int highest(struct node * x);
struct node *adddata(struct node *head, int stu);
void main()
{
    struct node * start;
    start=(struct node *)malloc(sizeof(struct node));
    int stu;
    printf("Enter number of students:");
    scanf("%d",&stu);
    printf("Enter student 1 name:");
    scanf(" %c",&start->name);
    printf("Enter marks for student 1:");
    scanf("%d",&start->marks);
    printf("Enter attendance for student 1:");
    scanf("%d",&start->attendance);
    start->ptr=NULL;
    start=adddata(start,stu);
    printf("Highest marks is %d",highest(start));
}
int highest(struct node * x)
{
    int maxval;
    maxval=x->marks;
    while(x!=NULL){
        if(maxval<x->marks){
            maxval=x->marks;
        }
        x=x->ptr;
    }
    return maxval;
}
struct node *adddata(struct node *head, int stu) 
{
    struct node *temp = head;
    for (int i = 1; i < stu; i++) {
        temp->ptr = (struct node *)malloc(sizeof(struct node));
        temp = temp->ptr;
        printf("Enter student %d name: ", i + 1);
        scanf(" %c", &temp->name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &temp->marks);
        printf("Enter attendance for student %d: ", i + 1);
        scanf("%d", &temp->attendance);
        temp->ptr = NULL;
    }
    return head;
}