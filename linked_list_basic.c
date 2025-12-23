#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;};
void printList(struct Node* head){
    struct Node* current=head;
    printf("Linked list :");
    while(current!=NULL){
        printf("%d->",current->data);
        current=current->next;}
    printf("NULL \n");}
int main(){
    int a,b,c;
    printf("enter a value for node1 : ");
    scanf("%d",&a);
    printf("enter a value for node2 : ");
    scanf("%d",&b);
    printf("enter a value for node3 : ");
    scanf("%d",&c);
    struct Node* node1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* node2=(struct Node*)malloc(sizeof(struct Node));
    struct Node* node3=(struct Node*)malloc(sizeof(struct Node));
    if(node1==NULL||node2==NULL||node3==NULL){
        printf("Memory allocation failed \n");
        return 1;}
    node1->data=a;
    node2->data=b;
    node3->data=c;
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    printList(node1);
    free(node1);
    free(node2);
    free(node3);
    return 0;}
