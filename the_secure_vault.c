#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int *vault=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("vault[%d] : %d \n",i,vault[i]);
    }
    free(vault);
    vault=NULL;
    return 0;
}
