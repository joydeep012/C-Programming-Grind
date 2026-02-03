#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
void Deletenode(struct node** head_ref,struct node* del){
    if(*head_ref==NULL||del==NULL)return;
    if(*head_ref==del)*head_ref=del->next;
    if(del->next!=NULL)del->next->prev=del->next;
    if(del->prev!=NULL)del->prev->next=del->next;
    free(del);
}
void push(struct node** head_ref,int newdata){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->prev=NULL;
    newnode->next=(*head_ref);
    if((*head_ref)!=NULL)(*head_ref)->prev=newnode;
    *head_ref=newnode;
}
int main(){
    struct node* head=NULL;
    push(&head,30);
    push(&head,20);
    push(&head,10);
    printf("deleting the head node \n");
    Deletenode(&head,head);
    if(head!=NULL){
        printf("new head node is %d\n",head->data);
    }
    return 0;
}
