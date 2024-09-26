#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* reverseLinkedList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next; 
        current->next = prev;  
        prev = current;
        current = next;
    }
    return prev;  
}
struct Node* addLists(struct Node* first, struct Node* second) {
    struct Node* result = NULL;
    struct Node *temp, *prev = NULL;
    int carry = 0, sum;
    while (first != NULL || second != NULL) {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = sum / 10;
        sum %= 10;
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = sum;
        temp->next = NULL;
        if (result == NULL) {
            result = temp;
        } else {
            prev->next = temp;
        }
        prev = temp;
        if (first) first = first->next;
        if (second) second = second->next;
    }
    if (carry > 0) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = carry;
        temp->next = NULL;
        prev->next = temp;
    }
    result=reverseLinkedList(result);
    return result;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}
struct Node* append(int x, struct Node* head) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}
struct Node* con(char num[], struct Node* dig) {
    struct Node* temp = dig;
    for (int i = 0; i < strlen(num); i++) {
        int x = num[i] - '0'; 
        temp = append(x, temp);
    }
    return temp;
}
int main() {
    char num1[100], num2[100];
    struct Node* first = NULL;
    struct Node* second = NULL;
    printf("Enter first number:");
    scanf("%s", num1);
    first = con(num1, first);
    printf("\nEnter second number:");
    scanf("%s", num2);
    second = con(num2, second);
    struct Node* result = addLists(first, second);
    printf("\nFirst number: ");
    printList(first);
    printf("Second number: ");
    printList(second);
    printf("Sum:");
    printList(result);
    return 0;
}
