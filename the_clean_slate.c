#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5; 
    int *m_ptr=(int*)malloc(n*sizeof(int));
    printf("Malloc value (garbage) : \n");
    for(int i=0;i<n;i++){ 
        printf("%d no value of malloc : %d \n",i+1,m_ptr[i]); 
    } 
        int *c_ptr=(int*)calloc(n,sizeof(int));
        printf("Calloc values (clean) : \n");
        for(int i=0;i<n;i++){ 
            printf("%d no value of calloc : %d \n",i+1,c_ptr[i]);   
        } 
        free(m_ptr); 
        free(c_ptr); 
        return 0;
}
