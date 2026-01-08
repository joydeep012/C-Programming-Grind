#include<stdio.h>
#define size 3
int main(){
    int sum=0;
    char buffer[100];
    int a[size][size];
    printf("enter the elements for the matrix a[%d][%d] : \n",size,size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("enter element for a[%d][%d] :",i,j);
            if(fgets(buffer,sizeof(buffer),stdin)!=NULL){
                if(sscanf(buffer,"%d",&a[i][j])!=1){
                    a[i][j]=0;
                }}
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==0||i==size-1||j==0||j==size-1){
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of the boundary : %d",sum);
    return 0;
}
