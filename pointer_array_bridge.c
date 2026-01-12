#include<stdio.h>
int main(){
    int n;
    char buffer[100];
    printf("enter a number for n : ");
    if(fgets(buffer,sizeof(buffer),stdin)!=NULL){
    sscanf(buffer,"%d",&n);
    }
    else{
        return 1;
    }
    if(n<=0){
        printf("error!!, enter a positive number :");
        return 1;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter a no for element %d : ",i);
        if(fgets(buffer,sizeof(buffer),stdin)!=NULL){
        sscanf(buffer,"%d",&arr[i]);}
    }
    printf("\n");
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("elements no %d :  %d \n",i+1,*(ptr+i));
    }
    return 0;
}
