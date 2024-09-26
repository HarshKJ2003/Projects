#include <stdio.h>
#include <stdlib.h>
struct node(
    int data;
    struct node * next;
);
struct node *reverse(struct node *head, int k) {
    if (head == NULL || k == 0) {
        return head;
    }
    struct node *current = head;
    struct node *prev = NULL;
    int count = 0;
    while (current != NULL && count < k) {
        prev = current;
        current = current->next;
        count++;
    }
    if (current == NULL) {
        return head;
    }
    prev->next = NULL;
    struct node *temp = current;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
    head = current;
    return head;
}