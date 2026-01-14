#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("How many subjects you have : ");
    if(scanf("%d",&n)!=1 || n<=0){
        printf("enter a Invalid no : ");
        return 1;
    }
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("memory allocation failed !!\n");
        return 1;
    }
    printf("enter the marks for %d subjects : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("Given marks for the subject %d is %d : \n",i+1,ptr[i]);}
    free(ptr);
    ptr=NULL;
    return 0;
}
