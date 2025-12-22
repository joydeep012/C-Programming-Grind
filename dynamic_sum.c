#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,s=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    if(n!=1 && n<=0){
        printf("enter atleast 1");
        return 1;
    }
    int arr=(int)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed \n");
        return 1;
    }
    
    for(i=0;i<n;i++){
        printf("%d enter the element :  ",i+1);
    scanf("%d",&arr[i]);
          s+=arr[i];
    }
    printf(" sum = %d",s);
    free(arr);
    return 0;
}
