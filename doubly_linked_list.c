#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->prev = NULL;
    head->next = second;
    second->data = 20;
    second->prev = head;
    second->next = NULL;
    printf("Forward: %d -> %d\n", head->data, head->next->data);
    printf("Backward: %d -> %d\n", second->data, second->prev->data);
    return 0;
}