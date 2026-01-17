#include<stdio.h>
#include<stdlib.h>
int main(){
    int Stack_ver=10;
    int *Heap_var=(int*)malloc(sizeof(int));
    if (Heap_var == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("---THE MEMORY MAP---\n");
    printf("Stack Address : %p \n",(void*)&Stack_ver);
    printf("Heap Address : %p \n",(void*)Heap_var);
    if((void*)&Stack_ver>(void*)Heap_var){
        printf("Result : Stack is higher than Heap\n");
    }
    else{
        printf("Result : Heap is higher than Stack\n");
    }
    free(Heap_var);
    Heap_var=NULL;
    return 0;
}
