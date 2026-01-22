#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    struct Node *middle=(struct Node*)malloc(sizeof(struct Node));
    struct Node *last=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=middle;
    middle->data=20;
    middle->next=last;
    last->data=30;
    last->next=NULL;
    struct Node *temp=head;
    printf("walking through the list :");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    free(head);
    free(middle);
    free(last);
    head=NULL;
    middle=NULL;
    last=NULL;
    return 0;
}
