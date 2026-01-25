#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
    struct Node* insertAtHead(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    return newNode;
}
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int a;
    printf("enter a no : ");
    scanf("%d",&a);
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = NULL;
    head = insertAtHead(head, a);
    printList(head);
    return 0;
}
