#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*)malloc(2*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed !!");
        return 1;
    }
    for(int i=0;i<2;i++){
        printf("enter the number : ");
        scanf("%d",&ptr[i]);
    }
    int *temp=realloc(ptr,4*sizeof(int));
    if(temp==NULL){
        printf("Memory allocation failed !!");
        free(ptr);
        return 1;
    }
    ptr=temp;
    for(int i=2;i<4;i++){
        printf("enter new number : ");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++){
    printf("expanded memory value : %d \n",ptr[i]);
    }
    free(ptr);
    ptr=NULL;
    return 0;
}
