#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* add;
};struct Node* top=NULL;
int isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int a){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("stack overflow");
        exit(1);}
        newNode->data=a;
        newNode->add=NULL;
        newNode->add=top;
        top=newNode;}
int pop(){
    struct Node* temp=top;
    if(isEmpty()){
        printf("stack is underflow");
        exit(1);
    }
    int v=temp->data;
    top=top->add;
    free(temp);
    temp=NULL;
    return v;
}
int peek(){
    if(isEmpty()){
        printf("stack is underflow");
        exit(1);}
        return top->data;
}

int main(){
    int choice,d;
    while(1){
        printf("\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.quit\n");
        printf("enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the element : ");
            scanf("%d",&d);
            push(d);
            break;
            case 2:
            d=pop();
            printf("deleted element is : %d",d);
            break;
            case 3:
            printf("the top most element is : %d",peek());
            break;
            case 4:
            exit(1);
            default:
            printf("wrong choice");}}
    return 0;
}
