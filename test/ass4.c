#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
};

typedef struct Node Node;

Node* createLinkedListFromNumber(long long number) {
    Node* head = NULL;
    Node* current = NULL;

    while (number > 0) {
        int digit = number % 10000; 
        number /= 10000;

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->value = digit;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
            newNode->prev = NULL;
        } else {
            current->next = newNode;
            newNode->prev = current;
            current = newNode;
        }
    }

    return head;
}

Node* addNumbers(Node* num1, Node* num2) {
    Node* result = NULL;
    Node* current = NULL;
    int carry = 0;

    while (num1 != NULL || num2 != NULL || carry > 0) {
        int sum = carry;

        if (num1 != NULL) {
            sum += num1->value;
            num1 = num1->next;
        }

        if (num2 != NULL) {
            sum += num2->value;
            num2 = num2->next;
        }

        carry = sum / 10000;
        sum %= 10000;

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->value = sum;
        newNode->next = NULL;

        if (result == NULL) {
            result = newNode;
            current = newNode;
            newNode->prev = NULL;
        } else {
            current->next = newNode;
            newNode->prev = current;
            current = newNode;
        }
    }

    return result;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%04d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    long long num1 = 681325468132;
    long long num2 = 123456789;

    Node* list1 = createLinkedListFromNumber(num1);
    Node* list2 = createLinkedListFromNumber(num2);

    printf("Number 1: ");
    printLinkedList(list1);

    printf("Number 2: ");
    printLinkedList(list2);

    Node* sum = addNumbers(list1, list2);

    printf("Sum: ");
    printLinkedList(sum);

    return 0;
}
