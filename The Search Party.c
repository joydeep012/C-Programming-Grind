#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void searchList(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("\nValue %d found!", key);
            return;
        }
        temp = temp->next;
    }
    printf("\nValue %d not in list.", key);
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
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = NULL;
    printList(head);
    searchList(head, 100);
    searchList(head, 150);
    return 0;
}
