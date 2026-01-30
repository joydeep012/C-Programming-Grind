#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* push(struct node* head_ref, int data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data; 
    if (head_ref == NULL) {
        new_node->next = new_node;
        return new_node;
    } else {
        new_node->next = head_ref;
        struct node* last = head_ref;
        while (last->next != head_ref) {
            last = last->next;
        }
        last->next = new_node;
        return new_node;
    }
}
void printCircular(struct node* head) {
    struct node* temp = head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("back to head\n");
}
int main() {
    struct node* head = NULL;
    head = push(head, 30);
    head = push(head, 20);
    head = push(head, 10);
    printf("The circular linked list is: ");
    printCircular(head);
    return 0;
}
